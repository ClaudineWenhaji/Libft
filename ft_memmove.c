/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:33:38 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 11:41:50 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// used to copy memory safely, even when the source and destination overlap
// copies n bytes from a source memory region to a destination memory region
// handles overlapping memory correctly by copying the bytes 
// in the right direction
// if dest < src → copy forward
// if dest > src → copy backward
// memmove = safe memory copy
// memcpy = fast but unsafe if overlapping
// Use memmove when not 100% sure whether the memory blocks overlap.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (ptr_dest < ptr_src)
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		ptr_dest = ptr_dest + n;
		ptr_src = ptr_src + n;
		while (n--)
			*(--ptr_dest) = *(--ptr_src);
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char buffer1[20] = "ABCDEFGHI";
	char buffer2[20] = "123456789";

	printf("Original buffer1: %s\n", buffer1);
	printf("Original buffer2: %s\n", buffer2);

	ft_memmove(buffer1 + 2, buffer2, 5);
	printf("buffer1 after ft_memmove: %s\n", buffer1);
	ft_memmove(buffer1 + 4, buffer2, 4);
	printf("buffer1 after ft_memmove: %s\n", buffer1);
	return (0);
}*/
