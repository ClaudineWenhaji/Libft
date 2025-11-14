/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:43:33 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/13 13:45:14 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elt;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = 0;
	while (lst)
	{
		tmp = f(lst->content);
		new_elt = ft_lstnew(tmp);
		if (new_elt == NULL)
		{
			free (tmp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elt);
		lst = lst->next;
	}
	return (new_list);
}
/*
int	main(void)
{
	t_list *root = ft_lstnew("root");
	t_list *root2 = ft_lstnew("root2");
	t_list *root3 = ft_lstnew("root3");
	t_list *root4 = ft_lstnew("root4");

	root->next = root2;
	root->next->next = root3;
	root->next->next->next = root4;

	t_list *mapped = ft_lstmap(root, f, del);

	printf("%s\n", mapped->content);
	printf("%s\n", mapped->next->content);
	printf("%s\n", mapped->next->next->content);
}*/
