/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:21:58 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/29 14:11:46 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1size;
	size_t	s2size;
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	ptr = malloc((s1size + s2size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while ((i + j) < (s1size + s2size + 1))
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "bonjour";
// 	char *str2 = " a 42";
// 	char *res = ft_strjoin(str, str2);
// 	printf("%s", res);
// }