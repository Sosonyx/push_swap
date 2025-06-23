/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instructions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:57:09 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/22 18:57:57 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pb(t_node **lst_b, t_node **lst_a)
{
	t_node	*tmp;

	if (!*lst_a)
		return ;
	tmp = (*lst_a);
	(*lst_a) = (*lst_a)->next;
	add_front(lst_b, tmp);
}

void	pa(t_node **lst_a, t_node **lst_b)
{
	t_node	*tmp;

	if (!*lst_b)
		return ;
	tmp = (*lst_b);
	(*lst_b) = (*lst_b)->next;
	add_front(lst_a, tmp);
}
