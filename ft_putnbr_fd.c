/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:40:46 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 11:03:35 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the specified file descriptor

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l > 9)
		ft_putnbr_fd(l / 10, fd);
	ft_putchar_fd(l % 10 + '0', fd);
}
/*
#include <stdio.h>

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}

int	main(void)
{
	long int	nbr = -2147483648;
	ft_putnbr_fd(nbr, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
