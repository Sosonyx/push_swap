/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:16:54 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/28 16:50:20 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	fft_toupper(unsigned int index, char c)
// {
// 	if ((index % 2 == 0) && (c >= 'a' && c <= 'z'))
// 		return (c - 32);
// 	return (c);
// }

// static size_t	fft_strlen(const char *s)
// {
// 	size_t	count;

// 	count = 0;
// 	while (s[count])
// 		count++;
// 	return (count);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s || !f)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *res = ft_strmapi("bonjour 42!", fft_toupper);
// 	printf("%s",res );
// }