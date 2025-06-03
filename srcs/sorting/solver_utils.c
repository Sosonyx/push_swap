/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:15:40 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 17:25:39 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pick_sort(t_piles *piles, t_node *lst_a, int size)
{	
	if (size == 1)
		return ;
	else if (size == 2)
	{
		if (lst_a->content > lst_a->next->content)
		{
			sa(&piles->pile_a);
			return ;
		}
		else
			return ;
	}
	else if (size == 3)
		sort_3(&piles->pile_a);
	else if (size == 5)
		sort_5(&piles->pile_a, &piles->pile_b);
	else
		sort_algo(piles, size);
}

int	short_way(int actual_index, int sorted_index, int size)
{
	int	ra;
	int	rra;

	ra = (sorted_index - actual_index + size) % size;
	rra = (actual_index - sorted_index + size) % size;
	if (ra == 0)
		return (-1);
	if (ra <= rra)
		return (1);
	else
		return (0);
}

void	push_to_b(t_piles *piles, t_node *element_a, int size)
{
	a_index(piles->pile_a);
	if (piles->pile_a->sorted_index == element_a->sorted_index)
	{
		pb(&(piles->pile_b), &(piles->pile_a));
		return ;
	}
	while (piles->pile_a->sorted_index != element_a->sorted_index)
	{
		if (short_way(piles->pile_a->actual_index,
				element_a->actual_index, size))
			ra(&piles->pile_a);
		else
			rra(&piles->pile_a);
	}
	pb(&(piles->pile_b), &(piles->pile_a));
}

t_node *find_max(t_node *lst)
{
    t_node *max_node;

    if (!lst)
        return NULL;
    max_node = lst;
    lst = lst->next;
    while (lst)
    {
        if (lst->sorted_index > max_node->sorted_index)
            max_node = lst;
        lst = lst->next;
    }
    return (max_node);
}
t_node *find_min(t_node *lst)
{
    t_node *min_node;

    if (!lst)
        return NULL;
    min_node = lst;
    lst = lst->next;
    while (lst)
    {
        if (lst->sorted_index < min_node->sorted_index)
            min_node = lst;
        lst = lst->next;
    }
    return (min_node);
}

void push_to_a(t_piles *p)
{
	t_node *max;
	int		rot;

	while (p->pile_b)
	{
		a_index(p->pile_b);
		max = find_max(p->pile_b);
		rot = determine_rotation(max->actual_index, lst_size(p->pile_b));
		while (rot > 0)
		{
			rb(&p->pile_b);
			rot--;
		}
		while (rot < 0)
		{
			rrb(&p->pile_b);
			rot++;
		}
		pa(&p->pile_a, &p->pile_b);
	}
}

