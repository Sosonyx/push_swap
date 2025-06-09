/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:21:18 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/09 15:05:23 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int content)
{
	t_node		*node;
	static int	i = 1;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	node->actual_index = i++;
	node->sorted_index = 1;
	node->next = NULL;
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

t_piles	*create_list(int ac, char **av)
{
	t_piles		*p;
	t_node		*a;
	t_node		*b;
	int			i;
	long long	nb;

	i = 1;
	p = malloc(sizeof(t_piles));
	if (!p)
		return (NULL);
	a = NULL;
	b = NULL;
	while (i < ac)
	{
		if (!check_if_args_are_numbers(ac, av))
			return (ft_putstr_fd("Error\n", 2), lst_clear(&a), free(p), NULL);
		nb = ft_aatoi(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (ft_putstr_fd("Error\n", 2), lst_clear(&a), free(p), NULL);
		add_back(&a, new_node(nb));
		i++;
	}
	p->pile_a = a;
	p->pile_b = b;
	return (p);
}
