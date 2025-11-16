/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:35:22 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 11:18:32 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory (using malloc(3)) and returns
// a string representing the integer received as an
// argument. Negative numbers must be handled

#include "libft.h"

int	decimal_places(long n)
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

char	*mount_str(char *str, long l, int i)
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
/*
#include<stdio.h>

int	main(void)
{
	char *str = ft_itoa(-2147483648);
        char *str1 = ft_itoa(-2147);
        char *str2 = ft_itoa(0);

	printf("ft_itoa(-2147483648): %s\n", str);
        printf("ft_itoa(-2147): %s\n", str1);
        printf("ft_itoa(0): %s\n", str2);
	return (0);
}*/
