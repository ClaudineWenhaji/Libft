/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:10:18 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/13 13:44:13 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
	{
		*lst = new;
		return ;
	}
	if (lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int	main(void)
{
	t_list *head = malloc(sizeof(t_list));
	head->content = "wach";

	t_list *second = malloc(sizeof(t_list));
	head->next = second;

	head->next->content = "wach2";
	head->next->next = NULL;

	t_list *new = malloc(sizeof(t_list));
	new->content = "wach_new";
	new->next = NULL;

	ft_lstadd_back(&head, new);
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	printf("%s\n", head->next->next->content);

     return (0);
}*/
