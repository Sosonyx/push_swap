/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:10:30 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/21 11:39:24 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *node)
// {
// 	free(node);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (! lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = tmp;
	}
	*lst = NULL;
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *one = ft_lstnew(ft_strdup("word"));
// 	t_list *two = ft_lstnew(ft_strdup("word"));
// 	t_list *three = ft_lstnew(ft_strdup("last"));
// 	t_list *current = one;
// 	one->next = two;
// 	two->next = three;
// 	int i = 0;
// 	while (current->next)
// 	{
// 		printf("NOEUD: %d   %s\n",i, (char *)current->content);
// 		i++;
// 		current = current->next;
// 	}
// 	// printf("NOEUD: %d   %s\n",i, (char*)current->content);
// 	ft_lstclear(&one, del);
// 	free(current);
// 	printf("NOEUD: %d   %p\n",i, one);
// }