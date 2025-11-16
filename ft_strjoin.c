/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:28:50 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 15:42:13 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates memory (using malloc(3)) and returns a
// new string, which is the result of concatenating
// ’s1’ and ’s2’

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*concat;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concat)
		return (NULL);
	ft_memcpy(concat, s1, len1);
	ft_memcpy(concat + len1, s2, len2);
	concat[len1 + len2] = '\0';
	return (concat);
}
/*
size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i++;
        return (i);
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char   *ptr_dest;
        unsigned char   *ptr_src;
	size_t		i;

        if (!dest && !src)
                return (NULL);
        ptr_dest = (unsigned char *)dest;
        ptr_src = (unsigned char *)src;
	i = 0;
        while (i < n)
        {
                ptr_dest[i] = ptr_src[i];
                i++;
        }
        return (dest);
}

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (!result)
        return 1; // malloc failed

    printf("Joined string: %s\n", result);

    free(result); // always free dynamically allocated memory
    return 0;
}*/
