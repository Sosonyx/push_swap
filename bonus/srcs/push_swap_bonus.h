/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 14:45:39 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/23 11:42:16 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>

typedef struct s_node
{
	int				content;
	int				actual_index;
	int				sorted_index;

	struct s_node	*next;
}	t_node;

typedef struct s_piles
{
	t_node	*pile_a;
	t_node	*pile_b;
}	t_piles;

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

int			free_all(t_piles *list, char *line, int return_value);
void		lst_clear(t_node **lst);
void		ft_putstr_fd(char *s, int fd);

int			check_if_no_duplicate(t_node *lst);

t_piles		*create_list(int ac, char **av);
int			apply_instruction(t_piles *p, char *line);

t_node		*new_node(int content);
void		add_front(t_node **lst, t_node *new);
void		add_back(t_node **lst, t_node *new);
t_node		*find_last(t_node *lst);
t_node		*find_before_last(t_node *lst);
int			lst_size(t_node *lst_a);
void		lst_clear(t_node **lst);
t_piles		*create_list(int ac, char **av);

int			is_sorted(t_node *lst);
int			lst_size(t_node *lst_a);
int			ft_strcmp(char *s1, char *s2);

#endif