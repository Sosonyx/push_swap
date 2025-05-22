/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:12:22 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/22 18:08:27 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_piles	*list;

	list = NULL;
	list = NULL;
	if (ac < 2)
		return (printf("Error\n"), 0);
	list = create_list(ac, av);
	if (!list)
		return (0);
	if (!check_if_no_duplicate(list->pile_a))
		return (0);
	printf("********************* PILE A : *********************\n");
	print_list(list->pile_a);
	printf("********************* PILE B : *********************\n");
	print_list(list->pile_b);
	int *array = set_array(list->pile_a, lst_size(list->pile_a));
	// print_array(array, lst_size(list->pile_a));
	sort_array(array, lst_size(list->pile_a));
	print_array(array, lst_size(list->pile_a));
	print_index(list->pile_a);
	get_pos_in_sorted_list(list->pile_a, );
}