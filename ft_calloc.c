/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:27:43 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/10 18:28:23 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	sum = nmemb * size;
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}
