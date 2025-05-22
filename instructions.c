/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:33:00 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/22 16:08:03 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_one(t_node *lst)
{
	lst->content = 0;
	free(lst);
}

void	add_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	sa(t_node **lst)
{
	t_node	*first;
	t_node	*second;

	if (!*lst || (*lst && !((*lst)->next)))
		return ;
	first = *lst;
	second = (*lst)->next;
	first->next = second->next;
	// first->prev = second;
	second->next = first;
	// second->prev = 0;
	*lst = second;
}

void	sb(t_node **lst)
{
	t_node	*first;
	t_node	*second;

	if (!*lst || (*lst && !((*lst)->next)))
		return ;
	first = *lst;
	second = (*lst)->next;
	first->next = second->next;
	// first->prev = second;
	second->next = first;
	// second->prev = 0;
	*lst = second;
}

void	ss(t_piles *piles)
{
	sa(&(piles->pile_a));
	sb(&(piles->pile_b));
}

void	pb(t_node **lst_b, t_node **lst_a)
{
	t_node	*tmp;

	if (!*lst_a)
		return ;
	tmp = (*lst_a);
	(*lst_a) = (*lst_a)->next;
	add_front(lst_b, tmp);
}

void	pa(t_node **lst_a, t_node **lst_b)
{
	t_node	*tmp;

	if (!*lst_b)
		return ;
	tmp = (*lst_b);
	(*lst_b) = (*lst_b)->next;
	add_front(lst_a, tmp);
}

void	ra(t_node **lst_a)
{
	t_node	*tmp;

	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	add_back(lst_a, tmp);
	tmp->next = NULL;
}

void	rb(t_node **lst_b)
{
	t_node	*tmp;

	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	add_back(lst_b, tmp);
	tmp->next = NULL;
}

t_node	*find_before_last(t_node *lst)
{
	t_node	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next->next)
		last = last->next;
	return (last);
}
t_node	*find_last(t_node *lst)
{
	t_node	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

void	rra(t_node **lst_a)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*new_last;

	if (!*lst_a || (*lst_a && !((*lst_a)->next)))
		return ;
	tmp = *lst_a;
	last = find_last(tmp);
	new_last = find_before_last(*lst_a);
	add_front(lst_a, last);
	last->next = tmp;
	*lst_a = last;
	new_last->next = NULL;
}

void	rrb(t_node **lst_b)
{
	t_node	*tmp;
	t_node	*last;
	t_node	*new_last;

	if (!*lst_b || (*lst_b && !((*lst_b)->next)))
		return ;
	tmp = *lst_b;
	last = find_last(tmp);
	new_last = find_before_last(*lst_b);
	add_front(lst_b, last);
	last->next = tmp;
	*lst_b = last;
	new_last->next = NULL;
}

void	rrr(t_piles *piles)
{
	rra(&(piles->pile_a));
	rrb(&(piles->pile_b));
}

