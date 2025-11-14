/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:32:00 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/14 17:34:43 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
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
                printf("fft_memchr: 'l' not found in first 5 characters\n");

	return (0);
}*/
