/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:34:04 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/14 18:23:20 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sublen;
	char	*trimmed;
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && is_set(s1[j - 1], set))
		j--;
	sublen = j - i;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen);
	trimmed[sublen] = '\0';
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
