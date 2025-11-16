/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:08:41 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 12:55:55 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// safer alternative to strcpy. 
// Instead of blindly copying a string into a buffer 
// (which can overflow), 
// strlcpy copies at most size - 1 characters 
// and always null-terminates the destination (if size > 0).

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *s, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(s));
	while (s[i] && i < size - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(s));
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
	char str[10];

	printf("Strlen of src is: %zu\n", ft_strlcpy(str, "abc", 2));
	return (0);
}*/
