/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:21:18 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 15:45:43 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "printf/ft_printf.h"

t_node	*new_node(int content)
{
	t_node		*node;
	static int	i = 1;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->content = content;
	node->actual_index = i++;
	node->sorted_index = 0;
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
	t_piles		*piles;
	t_node		*first_a;
	t_node		*first_b;
	int			i;
	long long	nb;

	i = 1;
	piles = malloc(sizeof(t_piles));
	if (!piles)
		return (NULL);
	first_a = NULL;
	first_b = NULL;
	while (i < ac)
	{
		if (!check_if_args_are_numbers(ac, av))
			return (ft_putstr_fd("Error\n", 2), lst_clear(&first_a), NULL);
		nb = ft_aatoi(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (ft_putstr_fd("Error\n", 2), lst_clear(&first_a), NULL);
		add_back(&first_a, new_node(nb));
		i++;
	}
	piles->pile_a = first_a;
	piles->pile_b = first_b;
	return (piles);
}

void	print_list(t_node *lst)
{
	t_node	*tmp;

	tmp = lst;
	if (!lst)
		return ;
	ft_printf("[Val] ------- [index]\n");
	while (tmp)
	{
		ft_printf("%d <------>", tmp->content);
		ft_printf(" %d\n", tmp->sorted_index);
		tmp = tmp->next;
	}
}
