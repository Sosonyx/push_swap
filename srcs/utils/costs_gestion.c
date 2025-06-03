/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs_gestion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:30:16 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 19:04:53 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	determine_rotation(int actual_index, int size)
{
	int	r;
	int	rr;

	r = actual_index - 1;
	rr = size - r;
	if (r <= rr)
		return (r);
	else
		return (-rr);
}

int	cost_in_a(t_node *lst_a, t_node *element_a, int size)
{
	int	ra;
	int	rra;

	a_index(lst_a);
	ra = element_a->actual_index - 1;
	rra = size - ra;
	if (ra <= rra)
		return (ra);
	else
		return (-rra);
}

int	cost_in_b(t_node *pile_b, t_node *target, int size)
{
	int	ra;
	int	rra;

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

t_node	*find_min_cost_in_a(t_piles *p, int sz)
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

t_node	*target_in_b(t_node *pile_b, int sorted_index)
{
	t_node	*el_b;
	t_node	*target;
	t_node	*max_node;

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
