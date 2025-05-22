/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:13:48 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/25 16:46:23 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
	{
		*s1 = (unsigned char)c;
		s1++;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	int tab[5] = {0, 1, 2, 3, 4};
// 	for(int i=0; i< 5; i++)
// 		printf("%d", tab[i]);
// 	printf("\n");
// 	ft_memset(tab, 0, 20);
// 	for(int i=0; i< 5; i++)
// 		printf("%d", tab[i]);
// }
