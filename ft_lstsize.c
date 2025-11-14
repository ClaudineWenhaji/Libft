/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:57:29 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/13 13:43:20 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));

    a->next = b;
    b->next = c;
    c->next = NULL;

    printf("Taille de la liste : %d\n", ft_lstsize(a)); // Affiche 3

    free(a);
    free(b);
    free(c);
    return 0;
}*/
