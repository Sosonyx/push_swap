/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:09:27 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/23 11:56:02 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include "../libft/libft.h"

int	free_all(t_piles *list, char *line, int return_value)
{
	int	ret;

	ret = return_value;
	if (!list)
		return (ret);
	if (list->pile_a)
		lst_clear(&list->pile_a);
	if (list->pile_b)
		lst_clear(&list->pile_b);
	free(list);
	if (line)
		free(line);
	return (ret);
}

int	is_sorted_checker(t_node *lst)
{
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_piles	*list;
	char	*line;

	if (ac < 2)
		return (0);
	list = create_list(ac, av);
	if (!list || !check_if_no_duplicate(list->pile_a))
		return (free_all(list, NULL, 1));
	line = get_next_line(0);
	while (line)
	{
		if (!apply_instruction(list, line))
		{
			ft_putstr_fd("Error\n", 2);
			return (free_all(list, line, 1));
		}
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted_checker(list->pile_a) && lst_size(list->pile_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (free_all(list, NULL, 0));
}
