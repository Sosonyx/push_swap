/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:05:18 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/22 18:06:31 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_size(t_node *lst)
{
	t_node	*tmp;
	int		count;	

	count = 1;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void sort_array(int *array, int size)
{
	int i;
	int	j;
	int tmp;
	
	i = 0;
	j = 0;
	tmp = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}	
			j++;
		}
		i++;
	}
}

int *set_array(t_node *lst_a, int size)
{
	int 	*array;
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = lst_a;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (printf("Echec malloc"), NULL);
	while (tmp)
	{
		array[i++] = tmp->content;
		tmp = tmp->next;
	}
	return (array);
}

void	print_index(t_node *lst)
{
	t_node	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("index de [%d] dans la liste non triee : (%d)\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
}


void	print_array(int *array, int size)
{
	int	i;

	i = 0;
	printf("********************* SORTED *********************\n");
	while (i < size - 1)
		printf("%d\n", array[i++]);
}

int	get_pos_in_sorted_list(t_node *lst, int value)
{
	t_node	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		if (lst->content == value)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}