/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:32:00 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 12:12:27 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// used to find the first occurrence of a byte value inside a block of memory
// similar to strchr, but it works on raw memory and does not stop at '\0'
// s: pointer to the memory block
// c: byte value to search for (converted to unsigned char)
// n: number of bytes to search
// Returns a pointer to the first occurrence of c, or NULL if not found

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char ptr3[] = "Hello World!";
	char *p = ft_memchr(ptr3, 'l', 5);

	if (p)
                printf("ft_memchr: found 'l' at index: %ld\n", p - ptr3);
        else
                printf("ft_memchr: 'l' not found \n");

	return (0);
}*/
