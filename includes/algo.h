/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:23:08 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/07 14:43:42 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

# include "structures.h"

int		determine_rotation(int actual_index, int size);

int		max(int a, int b);
int		ft_abs(int nb);

int		case_1(int cost_a, int cost_b, int size_a, int size_b);
int		case_2(int cost_a, int cost_b, int size_a, int size_b);
int		case_3(int cost_a, int cost_b);
int		best_case(t_piles *p, t_node *el_a);

void	perform_rotation(t_piles *p, t_node *el_a, t_node *target);

void	rotate_case_1(t_piles *p, int rot_a, int rot_b);
void	rotate_case_2(t_piles *p, int rot_a, int rot_b);
void	rotate_case_3(t_piles *p, int rot_a, int rot_b);

void	sort_algo(t_piles *p, int size);

#endif