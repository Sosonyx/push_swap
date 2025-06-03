/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:37:16 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/27 14:02:45 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_UTILS_H
# define LIST_UTILS_H

# include "structures.h"

t_node	*new_node(int content);
void	add_front(t_node **lst, t_node *new);
void	add_back(t_node **lst, t_node *new);
t_node	*find_last(t_node *lst);
t_node	*find_before_last(t_node *lst);
int		lst_size(t_node *lst_a);
void	lst_clear(t_node **lst);
t_piles	*create_list(int ac, char **av);

#endif