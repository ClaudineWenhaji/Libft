/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:29:45 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 12:26:51 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find the first occurrence of a character in a string
// similar in concept to memchr, but it works specifically
// with null-terminated strings and stops at the '\0'
// s → pointer to the string (must be null-terminated)
// c → character to search for (passed as int, but interpreted as char)
// Returns a pointer to the first occurrence of c in the string
// Returns NULL if c is not found
// Important: If c is '\0', it returns a pointer to the null terminator.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char *original = "Bonjour, tout le monde";
	printf("character found: %s\n", ft_strchr(original, 't'));
	printf("character found: %s\n", ft_strchr(original, 'e'));
	printf("character found: %s\n", ft_strchr(original, 'm'));
	return (0);
}*/
