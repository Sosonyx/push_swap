/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instructions_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:09:30 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/22 19:01:57 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_node **lst_a)
{
	t_node	*tmp;

	if (!*lst_a || !(*lst_a)->next)
		return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	add_back(lst_a, tmp);
	tmp->next = NULL;
}

void	rb(t_node **lst_b)
{
	t_node	*tmp;

	if (!*lst_b || !(*lst_b)->next)
		return ;
	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	add_back(lst_b, tmp);
	tmp->next = NULL;
}

void	rra(t_node **lst_a)
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

void	rrb(t_node **lst_b)
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
