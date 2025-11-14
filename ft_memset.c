/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:28:36 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/14 17:50:41 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
