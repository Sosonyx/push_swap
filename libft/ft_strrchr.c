/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:37:58 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/29 15:04:55 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	size = 0;
	if ((char)c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	size = ft_strlen(s);
	while (size--)
	{
		if ((char)c == s[size])
			return ((char *)(s + size));
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_strrchr("hello", 0));
// 	printf("%s\n\n", ft_strrchr("hello", 'l'));
// 	printf("Vraie : %p\n", strrchr("hello", 's'));
// 	printf("%p\n\n", ft_strrchr("hello", 's'));
// 	printf("Vraie : %p\n", strrchr("hello", 'r'));
// 	printf("%s\n", ft_strrchr("hrerllo", 'r'));
// }