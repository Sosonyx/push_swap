/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:37:48 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/27 15:16:28 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include "structures.h"

void	sa(t_node **lst);
void	sb(t_node **lst);
void	ss(t_piles *piles);
void	pa(t_node **lst_a, t_node **lst_b);
void	pb(t_node **lst_b, t_node **lst_a);
void	ra(t_node **lst_a);
void	rb(t_node **lst_b);
void	rr(t_piles *piles);
void	rra(t_node **lst_a);
void	rrb(t_node **lst_b);
void	rrr(t_piles *piles);

void	ra_rr(t_node **lst_a);
void	rb_rr(t_node **lst_b);
void	rra_rrr(t_node **lst_a);
void	rrb_rrr(t_node **lst_b);

#endif
