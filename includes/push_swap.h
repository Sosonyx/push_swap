/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:00:59 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/23 11:41:44 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Dépendances internes
# include "structures.h"
# include "parsing.h"
# include "list_utils.h"
# include "instructions.h"
# include "array_utils.h"
# include "sorting.h"

// Dépendances externes
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int			max(int a, int b);
int			ft_abs(int nb);
int			case_1(int cost_a, int cost_b, int size_a, int size_b);
int			case_2(int cost_a, int cost_b, int size_a, int size_b);
int			case_3(int cost_a, int cost_b);
int			best_case(t_piles *p, t_node *el_a);
void		perform_rotation(t_piles *p, t_node *el_a, t_node *target);
void		rotate_case_1(t_piles *p, int rot_a, int rot_b);
void		rotate_case_2(t_piles *p, int rot_a, int rot_b);
void		rotate_case_3(t_piles *p, int rot_a, int rot_b);
void		sort_algo(t_piles *p, int size);

int			check_if_args_are_numbers(int ac, char **av);
int			check_if_no_duplicate(t_node *lst);
int			is_valid_number(char *str);
long long	ft_aatoi(const char *nptr);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);

t_node		*new_node(int content);
void		add_front(t_node **lst, t_node *new);
void		add_back(t_node **lst, t_node *new);
t_node		*find_last(t_node *lst);
t_node		*find_before_last(t_node *lst);
int			lst_size(t_node *lst_a);
void		lst_clear(t_node **lst);
t_piles		*create_list(int ac, char **av);

void		sa(t_node **lst);
void		sb(t_node **lst);
void		ss(t_piles *piles);
void		pa(t_node **lst_a, t_node **lst_b);
void		pb(t_node **lst_b, t_node **lst_a);
void		ra(t_node **lst_a);
void		rb(t_node **lst_b);
void		rr(t_piles *piles);
void		rra(t_node **lst_a);
void		rrb(t_node **lst_b);
void		rrr(t_piles *piles);
void		ra_rr(t_node **lst_a);
void		rb_rr(t_node **lst_b);
void		rra_rrr(t_node **lst_a);
void		rrb_rrr(t_node **lst_b);

int			*set_array(t_node *lst_a, int size);
void		sort_array(int *array, int size);
int			get_pos_in_sorted_array(int *sorted, int size, int value);
void		assign_sorted_index(t_node *lst, int *sorted, int size);
void		a_index(t_node *lst);

int			determine_rotation(int actual_index, int size);
int			max(int a, int b);
int			ft_abs(int nb);
int			case_1(int cost_a, int cost_b, int size_a, int size_b);
int			case_2(int cost_a, int cost_b, int size_a, int size_b);
int			case_3(int cost_a, int cost_b);
int			best_case(t_piles *p, t_node *el_a);
void		perform_rotation(t_piles *p, t_node *el_a, t_node *target);
void		rotate_case_1(t_piles *p, int rot_a, int rot_b);
void		rotate_case_2(t_piles *p, int rot_a, int rot_b);
void		rotate_case_3(t_piles *p, int rot_a, int rot_b);
void		sort_algo(t_piles *p, int size);

int			is_sorted_checker(t_node *lst);

#endif
