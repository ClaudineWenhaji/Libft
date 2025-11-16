/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:23:38 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 16:00:57 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes a node as parameter and frees its content
// using the function ’del’. Free the node itself but
// does NOT free the next node

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

void delete_content(void *content)
{
    free(content);
}

int main(void)
{
    // Create a node
    t_list *node = malloc(sizeof(t_list));

    // Allocate an integer for content
    int *num = malloc(sizeof(int));
    *num = 42;

    node->content = num;
    node->next = NULL;

    printf("Before deletion: %d\n", *(int *)node->content);

    // Delete the node
    ft_lstdelone(node, delete_content);

    printf("Node deleted.\n");

    return 0;
}*/
