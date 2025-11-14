/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:37:52 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/13 13:44:56 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->ontent);
			lst = lst->next;
		}
	}
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	print_content(void *content)
		printf("%s\n", (char *)content);

int	main(void)
{
	t_list *lst = ft_lstnew("un");
	ft_lstadd_back(&lst, ft_lstnew("deux"));
	ft_lstadd_back(&lst, ft_lstnew("trois"));

	ft_lstiter(lst, print_content);

	return 0;
}*/
