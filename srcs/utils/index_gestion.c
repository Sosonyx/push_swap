/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_gestion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:06:57 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/01 17:32:48 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos_in_sorted_array(int *sorted, int size, int value)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (value == sorted[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_pos_in_list(t_node *lst, int size, int value)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (value == lst->content)
			return (i);
		i++;
	}
	return (-1);
}

void	assign_sorted_index(t_node *lst, int *sorted, int size)
{
	while (lst)
	{
		lst->sorted_index = get_pos_in_sorted_array(sorted, size, lst->content);
		lst = lst->next;
	}
}

void	a_index(t_node *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return ;
	while (lst)
	{
		lst->actual_index = i++;
		lst = lst->next;
	}
}
