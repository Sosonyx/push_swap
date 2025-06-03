/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:17:10 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 17:34:59 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **lst_b, t_node **lst_a)
{
	t_node	*tmp;

	if (!*lst_a)
		return ;
	tmp = (*lst_a);
	(*lst_a) = (*lst_a)->next;
	add_front(lst_b, tmp);
	write(1, "pb\n", 3);
}

void	pa(t_node **lst_a, t_node **lst_b)
{
	t_node	*tmp;

	if (!*lst_b)
		return ;
	tmp = (*lst_b);
	(*lst_b) = (*lst_b)->next;
	add_front(lst_a, tmp);
	write(1, "pa\n", 3);
}
