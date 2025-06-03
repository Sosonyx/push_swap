/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:50:01 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/28 13:38:38 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	sizesrc;
	size_t	sizedest;
	size_t	i;

	i = 0;
	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dst);
	if (!dst && !siz)
		return (sizesrc);
	if (siz <= sizedest)
		return (sizesrc + siz);
	while (src[i] && (i + sizedest < siz - 1))
	{
		dst[i + sizedest] = src[i];
		i++;
	}
	dst[i + sizedest] = '\0';
	return (sizesrc + sizedest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char src[] = "world" ;
// 	char dst[20] = "hello ";
// 	int nb = 10;
// 	// printf("real : %ld\n", strlcat(dst, src, nb));
// 	int res = ft_strlcat(dst, src, nb);
// 	printf("%d\n", res);
// 	printf("%s", dst);
// }