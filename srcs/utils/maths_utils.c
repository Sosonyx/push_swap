/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:34:48 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 19:05:02 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

t_node	*find_max(t_node *lst)
{
	t_node	*max_node;

	if (!lst)
		return (NULL);
	max_node = lst;
	lst = lst->next;
	while (lst)
	{
		if (lst->sorted_index > max_node->sorted_index)
			max_node = lst;
		lst = lst->next;
	}
	return (max_node);
}

t_node	*find_min(t_node *lst)
{
	t_node	*min_node;

	if (!lst)
		return (NULL);
	min_node = lst;
	lst = lst->next;
	while (lst)
	{
		if (lst->sorted_index < min_node->sorted_index)
			min_node = lst;
		lst = lst->next;
	}
	return (min_node);
}

int	short_way(int actual_index, int sorted_index, int size)
{
	int	ra;
	int	rra;

	ra = (sorted_index - actual_index + size) % size;
	rra = (actual_index - sorted_index + size) % size;
	if (ra == 0)
		return (-1);
	if (ra <= rra)
		return (1);
	else
		return (0);
}
