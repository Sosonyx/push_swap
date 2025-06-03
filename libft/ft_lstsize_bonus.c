/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:54:05 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/30 10:59:43 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *first = ft_lstnew("word");
// 	t_list *new = ft_lstnew("hello");
// 	t_list *new2 = ft_lstnew("hello");
// 	t_list *new3 = ft_lstnew("hello");
// 	first->next = new;
// 	new->next = new2;
// 	new2->next = new3;
// 	printf("%d", ft_lstsize(first));
// }