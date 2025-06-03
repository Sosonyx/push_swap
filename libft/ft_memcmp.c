/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:54:25 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/29 13:49:46 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1char;
	unsigned char	*s2char;
	size_t			i;

	i = 0;
	s1char = (unsigned char *)s1;
	s2char = (unsigned char *)s2;
	while (n--)
	{
		if (s1char[i] != s2char[i])
			return (s1char[i] - s2char[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "bonjour";
// 	char *str2 = "bonjqur";
// 	printf("%d", ft_memcmp(str, str2, 7));
// }