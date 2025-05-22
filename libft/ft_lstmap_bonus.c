/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:00:22 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/06 11:45:53 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *node)
// {
// 	free(node);
// }

// void	*transformed(void *content)
// {
// 	char *start = content;
// 	while (*(char *)content)
// 	{
// 		*(char *)content = 'z';
// 		content++;
// 	}
// 	return (start);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	first = 0;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *one = ft_lstnew(ft_strdup("word"));
// 	t_list *two = ft_lstnew(ft_strdup("word"));
// 	t_list *three = ft_lstnew(ft_strdup("last"));
// 	one->next = two;
// 	two->next = three;
// 	int i = 0;
// 	t_list *newlist = ft_lstmap(one, transformed, del);
// 	while (newlist)
// 	{
// 		printf("NOEUD: %d   %s\n",i++, (char *)newlist->content);
// 		newlist = newlist->next;
// 	}
// 	// printf("NOEUD: %d   %s\n",i, (char*)current->content);
// 	printf("NOEUD: %d   %p\n",i, one);
// 	ft_lstclear(&newlist, del);
// }