/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:34:04 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 15:24:19 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory (using malloc(3)) and returns a
// copy of ’s1’ with characters from ’set’ removed
// from the beginning and the end
//
//  is_set: Checks if a character c exists in the string set.
// 
// ft_strtim:
// 1.Start at the beginning of s1.
// 2.Skip all characters that are in set.
//	This moves i to the first character not in set
//
// 3.Start at the end of the string (j = length of s1).
// 4.Move backward while the character at s1[j-1] is in set.
// 5.Stop when we find a character not in set or when j <= i 
//
// 6.Copy s1_sublen characters from s1 + i 
// 	(starting after the trimmed beginning) into trimmed.
// 7.Add a null terminator at the end.
// 8.Return the trimmed string

#include "libft.h"

int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_sublen;
	char	*trimmed;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && is_set(s1[j - 1], set))
		j--;
	s1_sublen = j - i;
	trimmed = (char *)malloc(sizeof(char) * (s1_sublen + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, s1_sublen);
	trimmed[s1_sublen] = '\0';
	return (trimmed);
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

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char   *ptr_dest;
        unsigned char   *ptr_src;

        if (!dest && !src)
                return (NULL);
        ptr_dest = (unsigned char *)dest;
        ptr_src = (unsigned char *)src;
        while (n > 0)
        {
                *ptr_dest++ = *ptr_src++;
                n--;
        }
        return (dest);
}

int	main(void)
{
	char *s1 = "+++Hello World---+++";
    	char *set = "+-";
    	char *result;

    	result = ft_strtrim(s1, set);
    	if (!result)
    	{
        	printf("Allocation failed\n");
        	return 1;
    	}

    	printf("Original : \"%s\"\n", s1);
    	printf("Trim set : \"%s\"\n", set);
    	printf("Trimmed  : \"%s\"\n", result);

    	free(result);
    	return 0;
}*/
