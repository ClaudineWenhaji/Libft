/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:31:21 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 12:31:52 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// very similar to strchr, but instead of returning 
// the first occurrence of a character, 
// it returns the last occurrence in a null-terminated string.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last = ((char *)s + i);
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (last);
}
/*
#include <stdio.h>

int     main(void)
{
        char *original = "Bonjour, tout le monde";
        printf("character found: %s\n", ft_strrchr(original, 't'));
        return (0);
}*/
