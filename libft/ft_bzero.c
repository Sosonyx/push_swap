/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:25:57 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/01 15:17:20 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
		*s1++ = 0;
}

// #include <stdio.h>
// int main(void)
// {
// 	char tab[] = "123456789";

// 	printf("%s", tab);
// 	printf("\n");
// 	ft_bzero(tab + 3, 3);
// 	int i = 0;
// 	while (i < 10)
// 		printf("%c", tab[i++]);	
// }