/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:03:31 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 16:35:18 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "printf/ft_printf.h"

int	check_if_no_duplicate(t_node *lst)
{
	t_node	*current;
	t_node	*next_arg;

	current = lst;
	next_arg = NULL;
	if (!lst)
		return (0);
	while (current)
	{
		next_arg = current->next;
		while (next_arg)
		{
			if (current->content == next_arg->content)
				return (ft_putstr_fd("Error\n", 2), 0);
			next_arg = next_arg->next;
		}
		current = current->next;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	is_valid_number(char *str)
{
	int	i;

	if (!str || !str[0])
		return (0);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i] || !(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_if_args_are_numbers(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!is_valid_number(av[i]))
			return (0);
		i++;
	}
	return (1);
}
