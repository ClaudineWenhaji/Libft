/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:41:46 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/14 15:11:52 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		sum = (sum * 10) + (*nptr - '0');
		nptr++;
	}
	return (sign * sum);
}
/*
#include "libft.h"

int	main(void)
{
	printf("ft_atoi(  -123jour) is: %d\n", ft_atoi("  -123jour"));
	printf("ft_atoi(  ---abc123jour) is: %d\n", ft_atoi("  ---abc123jour"));
	printf("ft_atoi(  123jour) is: %d\n", ft_atoi("  123jour"));
	return (0);
}*/
