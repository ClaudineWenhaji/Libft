/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:51:42 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 11:31:56 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sets a block of memory to zero
// sets n bytes of a memory region to 0
// It is basically the ancestor of ft_memset(ptr, 0, size);

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char ptr[] = "Hello World!";

	ft_bzero(ptr, 4);
//	printf("%s\n", ptr);

	for (int i = 0; i < 12; i++)
    	printf("%d ", ptr[i]);
	return (0);
}*/
