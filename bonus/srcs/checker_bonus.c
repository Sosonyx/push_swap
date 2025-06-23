/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 14:31:28 by ihadj             #+#    #+#             */
/*   Updated: 2025/06/23 11:43:04 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (s1 && s2 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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

int	apply_instruction(t_piles *p, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		sa(&p->pile_a);
	else if (!ft_strcmp(line, "sb\n"))
		sb(&p->pile_b);
	else if (!ft_strcmp(line, "ss\n"))
		ss(p);
	else if (!ft_strcmp(line, "pa\n"))
		pa(&p->pile_a, &p->pile_b);
	else if (!ft_strcmp(line, "pb\n"))
		pb(&p->pile_b, &p->pile_a);
	else if (!ft_strcmp(line, "ra\n"))
		ra(&p->pile_a);
	else if (!ft_strcmp(line, "rb\n"))
		rb(&p->pile_b);
	else if (!ft_strcmp(line, "rr\n"))
		rr(p);
	else if (!ft_strcmp(line, "rra\n"))
		rra(&p->pile_a);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(&p->pile_b);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(p);
	else
		return (0);
	return (1);
}
