/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:33:50 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/25 13:49:05 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;

	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest2 < src2)
		while (n--)
			*dest2++ = *src2++;
	else
		while (n--)
			dest2[n] = src2[n];
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	src[] = "123456789a";
// 	char	dest[10] = "000000000";
// 	printf("%s\n", dest + 5);
// 	ft_memmove(dest + 2, src, 9);
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }