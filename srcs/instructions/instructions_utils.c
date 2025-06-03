/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:14:02 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/26 18:09:58 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_before_last(t_node *lst)
{
	t_node	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next->next)
		last = last->next;
	return (last);
}

t_node	*find_last(t_node *lst)
{
	t_node	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}
