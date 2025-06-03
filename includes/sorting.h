/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:38:29 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 18:45:41 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "structures.h"

void	pick_sort(t_piles *piles, t_node *lst_a, int size);
void	push_to_b(t_piles *piles, t_node *element_a, int size);
int		short_way(int actual_index, int sorted_index, int size);

void	sort_3(t_node **lst_a);
void	sort_5(t_node **lst_a, t_node **lst_b);
void	push_two_largest_to_b(t_node **lst_a, t_node **lst_b);
int 	cost_in_a(t_node *pile_a, t_node *element_a, int size);
int		cost_in_b(t_node *pile_b, t_node *target, int size);
t_node	*target_in_b(t_node *pile_b, int sorted_index);
t_node *find_min_cost_in_a(t_piles *p, int sz);

t_node *find_min(t_node *lst);
t_node *find_max(t_node *b);

void	push_to_a(t_piles *piles);
int 	determine_rotation(int actual_index, int size);

void	sort_algo(t_piles *p, int size);

int is_sorted(t_node *lst);

#endif