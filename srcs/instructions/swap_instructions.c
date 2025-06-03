/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:11:52 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/26 18:09:19 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "sa\n", 3);
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
	write(1, "sb\n", 3);
}

void	ss(t_piles *piles)
{
	sa(&(piles->pile_a));
	sb(&(piles->pile_b));
	write(1, "ss\n", 3);
}
