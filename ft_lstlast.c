/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:02:40 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 16:06:32 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the last node of the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int 	main(void)
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	a->content = "Premier";
	a->next = b;

	b->content = "Deuxième";
	b->next = c;

	c->content = "Dernier";
	c->next = NULL;

	t_list	*last = ft_lstlast(a);
	if (last)
		printf("Dernier élément : %s\n", (char *)last->content);

	free(a);
	free(b);
	free(c);
	return 0;
}*/
