/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:04:08 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/01 11:42:40 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_strchr("hello", 0));
// 	printf("%s\n", ft_strchr("hello", 'l'));
// 	// printf("%s\n", strchr("hello", 's'));
// 	// printf("%s\n", ft_strchr("hello", 's'));
// 	printf("%s\n", ft_strchr("hrerllo", 'r'));
// }0