/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:42 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 15:46:34 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// used to copy a block of memory from one place to another, byte by byte
// copies exactly n bytes from:
// a source memory region to a destination memory region
// It does not stop at '\0', and it doesn’t check for overlap.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char ptr1[] = "Hello World!";

	ft_memcpy(ptr1, "abc", 6);
	printf("After ft_memcpy: %s\n", ptr1);
	return (0);
}*/
