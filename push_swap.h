/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:00:59 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/22 18:06:44 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_piles
{
	t_node	*pile_a;
	t_node	*pile_b;
}	t_piles;

t_node			*new_node(int content);
void			add_front(t_node **lst, t_node *new);
void			add_back(t_node **lst, t_node *new);
t_piles			*create_list(int ac, char **av);
void			lst_clear(t_node **lst);
void			del_one(t_node *lst);
t_node			*find_last(t_node *lst);
t_node			*find_before_last(t_node *lst);
void			print_list(t_node *lst);
int				lst_size(t_node *lst_a);

void			sort_array(int *array, int size);
int 			*set_array(t_node *lst_a, int size);
void			print_array(int *array, int size);

void			sa(t_node **lst);
void			sb(t_node **lst);
void			ss(t_piles *piles);

void			pb(t_node **lst_b, t_node **lst_a);
void			pa(t_node **lst_a, t_node **lst_b);

void			ra(t_node **lst_a);
void			rb(t_node **lst_b);

void			rra(t_node **lst_a);
void			rrb(t_node **lst_b);
void			rrr(t_piles *piles);

int				check_if_args_are_numbers(int ac, char **av);
int				check_if_no_duplicate(t_node *lst);

long long		ft_aatoi(const char *nptr);
int				ft_isdigit(int c);
void			print_index(t_node *lst);
int	get_pos_in_sorted_list(t_node *lst, int value);

#endif