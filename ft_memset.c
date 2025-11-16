/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:28:36 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 11:29:07 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// writes the same byte value into every byte of a memory region
// s: pointer to the memory to fill
// c: the byte value to set (converted to unsigned char)
// n: number of bytes to fill

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char ptr[] = "Hello World!";

	printf("Original: %s\n", ptr);
	ft_memset(ptr, '*', 5);
	printf("ptr after ft_memset: %s\n", ptr);
	return (0);
}*/
