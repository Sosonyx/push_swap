/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:29:05 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/07 14:37:46 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calc_costs(t_piles *p, t_node *el_a, t_node *tgt, t_costs *costs)
{
	int	size_a;
	int	size_b;

	size_a = lst_size(p->pile_a);
	size_b = lst_size(p->pile_b);
	costs->a = cost_in_a(p->pile_a, el_a, size_a);
	costs->b = cost_in_b(p->pile_b, tgt, size_b);
}

int	best_case(t_piles *p, t_node *el_a)
{
	int		c1;
	int		c2;
	int		c3;
	t_node	*tgt;
	t_costs	costs;

	tgt = target_in_b(p->pile_b, el_a->sorted_index);
	calc_costs(p, el_a, tgt, &costs);
	c1 = case_1(costs.a, costs.b, lst_size(p->pile_a), lst_size(p->pile_b));
	c2 = case_2(costs.a, costs.b, lst_size(p->pile_a), lst_size(p->pile_b));
	c3 = case_3(costs.a, costs.b);
	if (c1 <= c2 && c1 <= c3)
		return (c1);
	else if (c2 <= c1 && c2 <= c3)
		return (c2);
	else
		return (c3);
}

int	case_1(int cost_a, int cost_b, int size_a, int size_b)
{
	if (cost_a < 0)
		cost_a += size_a;
	if (cost_b < 0)
		cost_b += size_b;
	return (max(cost_a, cost_b));
}

int	case_2(int cost_a, int cost_b, int size_a, int size_b)
{
	if (cost_a > 0)
		cost_a = cost_a - size_a;
	if (cost_b > 0)
		cost_b = cost_b - size_b;
	return (max(ft_abs(cost_a), ft_abs(cost_b)));
}

int	case_3(int cost_a, int cost_b)
{
	return ((ft_abs(cost_a) + ft_abs(cost_b)));
}
