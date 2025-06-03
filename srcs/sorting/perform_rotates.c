/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_rotates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:31:08 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 19:00:48 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_case_1(t_piles *p, int rot_a, int rot_b)
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

void	rotate_case_2(t_piles *p, int rot_a, int rot_b)
{
	int	size_a;
	int	size_b;

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

void	rotate_case_3(t_piles *p, int rot_a, int rot_b)
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
	int	rot_a;
	int	rot_b;
	int	c1, c2, c3;

	if (!target)
		return ;
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
