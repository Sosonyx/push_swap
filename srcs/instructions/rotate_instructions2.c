/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instructions2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:19:44 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/22 18:42:21 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rr(t_node **lst_a)
{
	t_node	*tmp;

	if (!*lst_a || !(*lst_a)->next)
		return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	add_back(lst_a, tmp);
	tmp->next = NULL;
}

void	rb_rr(t_node **lst_b)
{
	t_node	*tmp;

	if (!*lst_b || !(*lst_b)->next)
		return ;
	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	add_back(lst_b, tmp);
	tmp->next = NULL;
}

void	rr(t_piles *piles)
{
	ra_rr(&piles->pile_a);
	rb_rr(&piles->pile_b);
	write(1, "rr\n", 3);
}
