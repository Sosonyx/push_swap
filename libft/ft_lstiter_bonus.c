/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:35:20 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/30 13:59:31 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_putstr(void *s)
// {
// 	while (*(char *)s)
// 		write(1, s++, 1);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f((char *)(lst->content));
		lst = lst->next;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *first = ft_lstnew(ft_strdup("1"));
// 	t_list *new = ft_lstnew(ft_strdup("2"));
// 	t_list *new2 = ft_lstnew(ft_strdup("3"));
// 	t_list *new3 = ft_lstnew(ft_strdup("je suis le dernier"));

// 	first->next = new;
// 	new->next = new2;
// 	new2->next = new3;

// 	ft_lstiter(first, ft_putstr);
// }