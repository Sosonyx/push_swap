/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:09:27 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/03 18:10:48 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **lst_a)
{
	t_node *el_a;

	if (!lst_a || !*lst_a || !(*lst_a)->next || !(*lst_a)->next->next)
		return ;
	el_a = *lst_a;
	if (el_a->sorted_index < el_a->next->sorted_index
		&& el_a->next->sorted_index < el_a->next->next->sorted_index)
		return ;
	if (el_a->sorted_index > el_a->next->sorted_index)
	{
		if (el_a->next->sorted_index > el_a->next->next->sorted_index)
		{
			sa(lst_a);
			rra(lst_a);
		}
		else if (el_a->sorted_index > el_a->next->next->sorted_index)
			ra(lst_a);
		else
			sa(lst_a);
	}
	else
	{
		if (el_a->sorted_index < el_a->next->next->sorted_index)
		{
			sa(lst_a);
			ra(lst_a);
		}
		else
			rra(lst_a);
	}
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


void	sort_5(t_node **lst_a, t_node **lst_b)
{
	int	i;

	i = 0;
	if (!lst_a || !*lst_a || !lst_b)
		return;
	push_two_largest_to_b(lst_a, lst_b);
	a_index(*lst_a);
	sort_3(lst_a);
	while (i < 2)
	{
		if ((*lst_b)->next && (*lst_b)->sorted_index < (*lst_b)->next->sorted_index)
			sb(lst_b);
		pa(lst_a, lst_b);
		a_index(*lst_a);
		a_index(*lst_b);
		i++;
	}
	a_index(*lst_a);
	a_index(*lst_b);
}
int is_sorted(t_node *lst)
{
    if (!lst)
        return (1);
    while (lst->next)
    {
        if (lst->sorted_index > lst->next->sorted_index)
            return (0);
        lst = lst->next;
    }
    return (1);
}
