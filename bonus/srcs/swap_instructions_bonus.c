/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:11:52 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/22 19:02:23 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_node **lst)
{
	t_node	*first;
	t_node	*second;

	if (!*lst || (*lst && !((*lst)->next)))
		return ;
	first = *lst;
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	*lst = second;
}

void	sb(t_node **lst)
{
	t_node	*first;
	t_node	*second;

	if (!*lst || (*lst && !((*lst)->next)))
		return ;
	first = *lst;
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	*lst = second;
}

void	ss(t_piles *piles)
{
	sa(&(piles->pile_a));
	sb(&(piles->pile_b));
}
