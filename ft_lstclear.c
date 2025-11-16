/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:28:25 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 16:07:59 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and all its
// successors, using the function ’del’ and free(3).
// Finally, set the pointer to the list to NULL

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del(void *content)
{
    free(content);
}

int	main(void)
{
	t_list *head;

    // Create a small list with 2 nodes
    	head = ft_lstnew(strdup("First"));
    	head->next = ft_lstnew(strdup("Second"));

    // Print the list
    	printf("Before clearing:\n");
    	t_list *tmp = head;
    	while (tmp)
    	{
        	printf("%s\n", (char *)tmp->content);
        	tmp = tmp->next;
    	}

    // Clear the list
    	ft_lstclear(&head, del);

    // Confirm the list is cleared
    	if (!head)
        	printf("List cleared successfully.\n");

    	return 0;	
}*/
