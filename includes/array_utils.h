/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:38:08 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/27 14:02:20 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_UTILS_H
# define ARRAY_UTILS_H

# include "structures.h"

int		*set_array(t_node *lst_a, int size);
void	sort_array(int *array, int size);
int		get_pos_in_sorted_array(int *sorted, int size, int value);
int		get_pos_in_list(t_node *lst, int size, int value);
void	assign_sorted_index(t_node *lst, int *sorted, int size);
void	a_index(t_node *lst);

#endif
