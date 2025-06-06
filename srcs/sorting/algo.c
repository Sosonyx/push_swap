/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:33:53 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/06 15:38:35 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algo(t_piles *p, int size)
{
	t_node	*element_a;
	t_node	*target;

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
			break ;
		target = target_in_b(p->pile_b, element_a->sorted_index);
		perform_rotation(p, element_a, target);
		a_index(p->pile_a);
		a_index(p->pile_b);
		pb(&p->pile_b, &p->pile_a);
	}
	push_to_a(p);
}
