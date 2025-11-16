/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:30:19 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 12:46:42 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches for a substring inside a string, but only up to a limited length
// Returns a pointer to the first occurrence of little 
// in big within the first len bytes
// Returns NULL if little is not found
// check if little matches at position i in big.
// The loop continues as long as:
// You haven’t reached the end of big (big[i + j] != '\0)`)
// The characters match (big[i + j] == little[j])
// You haven’t exceeded the len limit (i + j < len)

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] != '\0'
			&& big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}	
		++i;
	}	
	return (NULL);
}
/*
#include <stdio.h>

int     main(void)
{
        char *original = "Bonjour, tout le monde";
        printf("%s\n", ft_strnstr(original, "out", 13));
        printf("%s\n", ft_strnstr(original, "bonjour", 13));
        return (0);
}*/
