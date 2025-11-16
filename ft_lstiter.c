/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:37:52 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 16:09:45 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates through the list ’lst’ and applies the
// function ’f’ to the content of each node

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *lst = ft_lstnew("un");
	ft_lstadd_back(&lst, ft_lstnew("deux"));
	ft_lstadd_back(&lst, ft_lstnew("trois"));

	ft_lstiter(lst, print_content);

	return 0;
}*/
