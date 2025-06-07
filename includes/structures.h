/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:35:50 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/07 14:38:15 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

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

typedef struct s_costs
{
	int	a;
	int	b;
}	t_costs;

#endif
