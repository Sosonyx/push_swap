/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:33:53 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 15:35:48 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int cost_in_a(t_node *lst_a, t_node *element_a, int size)
{
    int ra;
    int rra;

    a_index(lst_a);
    ra = element_a->actual_index - 1;
    rra = size - ra;
    if (ra <= rra)
        return (ra);
    else
        return (-rra);
}


t_node *target_in_b(t_node *pile_b, int sorted_index)
{
    t_node *el_b;
    t_node *target;
    t_node *max_node;

    target = NULL;
    max_node = NULL;
    el_b = pile_b;
    while (el_b)
    {
        if (el_b->sorted_index < sorted_index)
        {
            if (!target || el_b->sorted_index > target->sorted_index)
                target = el_b;
        }
        if (!max_node || el_b->sorted_index > max_node->sorted_index)
            max_node = el_b;
        el_b = el_b->next;
    }
    if (!target)
        target = max_node;
    return (target);
}


int cost_in_b(t_node *pile_b, t_node *target, int size)
{
    int ra;
    int rra;

    a_index(pile_b);
    if (!pile_b || !target)
        return (0);
    ra = target->actual_index - 1;
    rra = size - ra;
    if (ra <= rra)
        return (ra);
    else
        return (-rra);
}


int	max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int determine_rotation(int actual_index, int size)
{
    int	r;
    int rr;

	r = actual_index - 1;
	rr = size - r;
    if (r <= rr)
        return (r);
    else
        return (-rr); 
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}
int	case_1(int cost_a, int cost_b, int size_a, int size_b)
{
	if (cost_a < 0)
		cost_a += size_a;
	if (cost_b < 0)
		cost_b += size_b;
	return (max(cost_a, cost_b));
}
int	case_2(int cost_a, int cost_b, int size_a, int size_b)
{
	if (cost_a > 0)
		cost_a = cost_a - size_a;
	if (cost_b > 0)
		cost_b = cost_b - size_b;
	return (max(ft_abs(cost_a), ft_abs(cost_b)));
}


int	case_3(int cost_a, int cost_b)
{
	return ((ft_abs(cost_a) + ft_abs(cost_b)));
}

int	best_case(t_piles *p, t_node *el_a)
{
	int		c1;
	int		c2;
	int		c3;
	t_node	*tgt;

	tgt = target_in_b(p->pile_b, el_a->sorted_index);
	c1 = case_1(cost_in_a(p->pile_a, el_a, lst_size(p->pile_a)), cost_in_b(p->pile_b, tgt, lst_size(p->pile_b)), lst_size(p->pile_a), lst_size(p->pile_b));
	c2 = case_2(cost_in_a(p->pile_a, el_a, lst_size(p->pile_a)), cost_in_b(p->pile_b, tgt, lst_size(p->pile_b)), lst_size(p->pile_a), lst_size(p->pile_b));
	c3 = case_3(cost_in_a(p->pile_a, el_a, lst_size(p->pile_a)), cost_in_b(p->pile_b, tgt, lst_size(p->pile_b)));
	if (c1 <= c2 && c1 <= c3)
		return (c1);
	else if (c2 <= c1 && c2 <= c3)
		return (c2);
	else
		return (c3);
}
t_node *find_min_cost_in_a(t_piles *p, int sz)
{
	t_node	*el_a;
	t_node	*best_element;
	int		min_cost;
	int		cost;

	el_a = p->pile_a;
	best_element = NULL;
	min_cost = sz + 1;
	while (el_a)
	{
		cost = best_case(p, el_a);
		if (cost < min_cost)
		{
			min_cost = cost;
			best_element = el_a;
		}
		el_a = el_a->next;
	}
	return (best_element);
}


void rotate_case_1(t_piles *p, int rot_a, int rot_b)
{
	while (rot_a > 0 && rot_b > 0)
	{
		rr(p);
		rot_a--;
		rot_b--;
	}
	while (rot_a > 0)
	{
		ra(&p->pile_a);
		rot_a--;
	}
	while (rot_b > 0)
	{
		rb(&p->pile_b);
		rot_b--;
	}
}
void rotate_case_2(t_piles *p, int rot_a, int rot_b)
{
 	int size_a;
 	int size_b;

	size_a = lst_size(p->pile_a);
	size_b = lst_size(p->pile_b);
	if (rot_a > 0)
		rot_a = rot_a - size_a;
	if (rot_b > 0)
		rot_b = rot_b - size_b;
	while (rot_a < 0 && rot_b < 0)
	{
		rrr(p);
		rot_a++;
		rot_b++;
	}
	while (rot_a < 0)
	{
		rra(&p->pile_a);
		rot_a++;
	}
	while (rot_b < 0)
	{
		rrb(&p->pile_b);
		rot_b++;
	}
}
void rotate_case_3(t_piles *p, int rot_a, int rot_b)
{
	while (rot_a > 0)
	{
		ra(&p->pile_a);
		rot_a--;
	}
	while (rot_a < 0)
	{
		rra(&p->pile_a);
		rot_a++;
	}
	while (rot_b > 0)
	{
		rb(&p->pile_b);
		rot_b--;
	}
	while (rot_b < 0)
	{
		rrb(&p->pile_b);
		rot_b++;
	}
}

void	perform_rotation(t_piles *p, t_node *el_a, t_node *target)
{
	int rot_a;
	int rot_b;
	int c1, c2, c3;

	if (!target)
		return;
	a_index(p->pile_a);
	a_index(p->pile_b);
	rot_a = determine_rotation(el_a->actual_index, lst_size(p->pile_a));
	rot_b = determine_rotation(target->actual_index, lst_size(p->pile_b));
	c1 = case_1(rot_a, rot_b, lst_size(p->pile_a), lst_size(p->pile_b));
	c2 = case_2(rot_a, rot_b, lst_size(p->pile_a), lst_size(p->pile_b));
	c3 = case_3(rot_a, rot_b);
	if (best_case(p, el_a) == c1)
		rotate_case_1(p, rot_a, rot_b);
	else if (best_case(p, el_a) == c2)
		rotate_case_2(p, rot_a, rot_b);
	else if (best_case(p, el_a) == c3)
		rotate_case_3(p, rot_a, rot_b);
}
void	sort_algo(t_piles *p, int size)
{
	t_node *element_a;
	t_node *target;

	element_a = p->pile_a;
	target = NULL;
	pb(&p->pile_b, &p->pile_a);
	a_index(p->pile_a);
	a_index(p->pile_b);
	while (lst_size(p->pile_a))
	{
		a_index(p->pile_a);
		a_index(p->pile_b);
		element_a = find_min_cost_in_a(p, size);
		if (!element_a)
			break;
		target = target_in_b(p->pile_b, element_a->sorted_index);
		perform_rotation(p, element_a, target);
		a_index(p->pile_a);
		a_index(p->pile_b);
		pb(&p->pile_b, &p->pile_a);
	}
	push_to_a(p);
}

