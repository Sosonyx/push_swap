/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:33:45 by ihadj             #+#    #+#             */
/*   Updated: 2025/04/28 13:38:08 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;
	char	*start;

	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	start = ptr;
	while (size--)
		*ptr++ = *s++;
	*ptr = '\0';
	return (start);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "helloworlgrgrdd";
// 	char *str2 = ft_strdup(str);
// 	printf("%s", str2);
// }