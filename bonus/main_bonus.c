/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:09:27 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/07 15:14:39 by ihadj            ###   ########.fr       */
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

int	main(int ac, char **av)
{
	t_piles	*list;
	char	*line;

	if (ac < 2)
		return (0);
	line = NULL;
	list = create_list(ac, av);
	if (!list || !check_if_no_duplicate(list->pile_a))
		return (free_all(list, NULL, 1));
	while (line)
	{
		line = get_next_line(0);
		if (!apply_instruction(list, line))
		{
			ft_putstr_fd("Error\n", 2);
			return (free_all(list, line, 1));
		}
		free(line);
	}
	if (is_sorted(list->pile_a) && lst_size(list->pile_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (free_all(list, NULL, 0));
}
