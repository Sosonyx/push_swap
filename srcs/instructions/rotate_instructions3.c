/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instructions3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:16:34 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/27 16:04:39 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_rrr(t_node **lst_a)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*new_last;

	if (!*lst_a || (*lst_a && !((*lst_a)->next)))
		return ;
	tmp = *lst_a;
	last = find_last(tmp);
	new_last = find_before_last(*lst_a);
	add_front(lst_a, last);
	last->next = tmp;
	*lst_a = last;
	new_last->next = NULL;
}

void	rrb_rrr(t_node **lst_b)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*new_last;

	if (!*lst_b || (*lst_b && !((*lst_b)->next)))
		return ;
	tmp = *lst_b;
	last = find_last(tmp);
	new_last = find_before_last(*lst_b);
	add_front(lst_b, last);
	last->next = tmp;
	*lst_b = last;
	new_last->next = NULL;
}

void	rrr(t_piles *piles)
{
	rra_rrr(&(piles->pile_a));
	rrb_rrr(&(piles->pile_b));
	write(1, "rrr\n", 4);
}
