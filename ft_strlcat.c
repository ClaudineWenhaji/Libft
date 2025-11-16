/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:57:19 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 12:54:06 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// safer string concatenation function than strcat. 
// It appends one string to another 
// but always respects the buffer size to avoid overflows
// Returns the total length of the string it tried to create:
// strlen(dest) + strlen(src)
// Guarantees null-termination if size > 0.
// Appends at most size - strlen(dest) - 1 characters from src.
// The return value lets you detect truncation:
// If return ≥ size, truncation occurred

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	result;

	i = 0;
	result = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
		result = dest_len + src_len;
	else
		return (src_len + size);
	while (src[i] && (dest_len + 1) < size)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (result);
}
/*
#include <stdio.h>

size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

int	main(void)
{
	printf("%zu\n", ft_strlcat("ABC", "abc", 0));
	return (0);
}*/
