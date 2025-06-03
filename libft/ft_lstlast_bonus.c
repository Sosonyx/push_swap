/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:46:45 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/29 17:59:10 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *first = ft_lstnew("word");
// 	t_list *new = ft_lstnew("hello");
// 	t_list *new2 = ft_lstnew("hello");
// 	t_list *new3 = ft_lstnew("je suis le dernier");
// 	first->next = new;
// 	new->next = new2;
// 	new2->next = new3;
// 	printf("%s", (char*)ft_lstlast(first)->content);
// }