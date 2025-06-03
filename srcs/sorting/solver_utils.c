/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:15:40 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 18:55:44 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	push_to_a(t_piles *p)
{
	t_node	*max;
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

int	is_sorted(t_node *lst)
{
	while (lst && lst->next)
	{
		if (lst->sorted_index > lst->next->sorted_index)
			return (0);
		lst = lst->next;
	}
	return (1);
}
