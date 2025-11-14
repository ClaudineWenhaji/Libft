/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:16:42 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/11 15:33:19 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

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
