/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:10:13 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/29 18:29:27 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *first = ft_lstnew("word");
// 	t_list *new = ft_lstnew("hello");
// 	ft_lstadd_front(&first, new);
// 	t_list *current = new;
// 	while (current)
// 	{
// 		printf("%s",(char *)current->content);
// 		current = current->next;
// 	}
// }