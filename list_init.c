/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:21:18 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/22 17:30:57 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int content)
{
	t_node		*node;
	static int i = 1;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	node->index = i++;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_node **lst, t_node *new)
{
	t_node	*tmp;

	tmp = *lst;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	lst_clear(t_node **lst)
{
	t_node	*tmp;

	if (! lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->content = 0;
		free((*lst));
		(*lst) = tmp;
	}
	*lst = NULL;
}

t_piles	*create_list(int ac, char **av)
{
	t_piles		*piles;
	t_node		*first_a;
	t_node		*first_b;
	int			i;
	long long	nb;

	i = 1;
	piles = malloc(sizeof(t_piles));
	first_a = NULL;
	first_b = NULL;
	while (i < ac)
	{
		if (!check_if_args_are_numbers(ac, av))
			return (printf("Error\n"), NULL);
		else
			nb = ft_aatoi(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (printf("Error\n"), lst_clear(&first_a), NULL);
		add_back(&first_a, new_node(ft_aatoi(av[i++])));
	}
	piles->pile_a = first_a;
	piles->pile_b = first_b;
	return (piles);
}

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
				return (printf("Error\n"), 0);
			next_arg = next_arg->next;
		}
		current = current->next;
	}
	return (1);
}

void	print_list(t_node *lst)
{
	t_node	*tmp;

	tmp = lst;
	if (!lst)
		return ;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}
