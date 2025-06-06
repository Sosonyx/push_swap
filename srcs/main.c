/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:12:22 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/06 16:45:46 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_piles	*list;
	int		*array;

	list = NULL;
	if (ac < 2)
		return (0);
	list = create_list(ac, av);
	if (!list)
		return (1);
	if (!check_if_no_duplicate(list->pile_a))
		return (1);
	array = set_array(list->pile_a, lst_size(list->pile_a));
	sort_array(array, lst_size(list->pile_a));
	assign_sorted_index(list->pile_a, array, lst_size(list->pile_a));
	free(array);
	if (is_sorted(list->pile_a))
		return (0);
	pick_sort(list, list->pile_a, lst_size(list->pile_a));
	lst_clear(&list->pile_a);
	free(list);
}
