/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:09:27 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/06 16:58:30 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pick_sort(t_piles *piles, t_node *lst_a, int size)
{	
	if (size == 1)
		return ;
	else if (size == 2)
	{
		if (lst_a->content > lst_a->next->content)
		{
			sa(&piles->pile_a);
			return ;
		}
		else
			return ;
	}
	else if (size == 3)
		sort_3(&piles->pile_a);
	else if (size == 5)
		sort_5(&piles->pile_a, &piles->pile_b);
	else
		sort_algo(piles, size);
}

void	sort_3_rotates(t_node **lst_a, t_node **el_a)
{
	if ((*el_a)->sorted_index > (*el_a)->next->sorted_index)
	{
		if ((*el_a)->next->sorted_index > (*el_a)->next->next->sorted_index)
		{
			sa(lst_a);
			rra(lst_a);
		}
		else if ((*el_a)->sorted_index > (*el_a)->next->next->sorted_index)
			ra(lst_a);
		else
			sa(lst_a);
	}
	else
	{
		if ((*el_a)->sorted_index < (*el_a)->next->next->sorted_index)
		{
			sa(lst_a);
			ra(lst_a);
		}
		else
			rra(lst_a);
	}
}

void	sort_3(t_node **lst_a)
{
	t_node	*el_a;

	if (!lst_a || !*lst_a || !(*lst_a)->next || !(*lst_a)->next->next)
		return ;
	el_a = *lst_a;
	if (el_a->sorted_index < el_a->next->sorted_index
		&& el_a->next->sorted_index < el_a->next->next->sorted_index)
		return ;
	sort_3_rotates(lst_a, &el_a);
}

void	push_two_largest_to_b(t_node **lst_a, t_node **lst_b)
{
	t_node	*max;
	int		count;

	count = 0;
	while (count < 2)
	{
		a_index(*lst_a);
		max = find_min(*lst_a);
		while (*lst_a != max)
		{
			if (max->actual_index <= lst_size(*lst_a) / 2)
				ra(lst_a);
			else
				rra(lst_a);
			a_index(*lst_a);
		}
		pb(lst_b, lst_a);
		count++;
	}
}

void	sort_5(t_node **lst_a, t_node **l_b)
{
	int	i;

	i = 0;
	if (!lst_a || !*lst_a || !l_b)
		return ;
	push_two_largest_to_b(lst_a, l_b);
	a_index(*lst_a);
	sort_3(lst_a);
	while (i < 2)
	{
		if ((*l_b)->next && (*l_b)->sorted_index < (*l_b)->next->sorted_index)
			sb(l_b);
		pa(lst_a, l_b);
		a_index(*lst_a);
		a_index(*l_b);
		i++;
	}
	a_index(*lst_a);
	a_index(*l_b);
}
