/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:30:24 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/01 13:02:55 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

// #include <stdio.h>
// int main()
// {
//     t_list *first = NULL;
//     t_list *second = ft_lstnew(ft_strdup("1"));
//     t_list *third = ft_lstnew(ft_strdup("2"));
//     t_list *fourth = ft_lstnew(ft_strdup("3"));
//     t_list *fifth = ft_lstnew(ft_strdup("4"));

//     ft_lstadd_back(&first, second);
//     ft_lstadd_back(&first, third);
//     ft_lstadd_back(&first, fourth);
//     ft_lstadd_back(&first, fifth);

//     t_list *current = first;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&first, ft_del);
//     return (0);
// }