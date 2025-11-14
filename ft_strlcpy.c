/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:08:41 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/13 15:00:50 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *s, size_t size)
{
	size_t	i;
	
	if (!s)
		return (0);
	if (!dst && size > 0)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (s[i] && i < size - 1)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(s));
}
