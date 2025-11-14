/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:35:22 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/13 13:47:27 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	decimal_places(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*mount_str(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l = l / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long		l;

	l = n;
	i = decimal_places(l);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if ((!str))
		return (NULL);
	str[i--] = '\0';
	return (mount_str(str, l, i));
}
