/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:27:43 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/14 16:30:19 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}
/*
void    *ft_memset(void *s, int c, size_t n)
{
        unsigned char   *ptr;

        ptr = s;
        while (n > 0)
        {
                *ptr++ = (unsigned char)c;
                n--;
        }
        return (s);
}

int	main(void)
{
	int *arr;
    	size_t n = 5;

    	// Allocate memory for 5 integers
    	arr = ft_calloc(n, sizeof(int));
    	if (!arr)
    	{
        	printf("Memory allocation failed\n");
        	return 1;
    	}

    // Print the array to show all elements are zero-initialized
    	printf("Array after ft_calloc:\n");
    	for (size_t i = 0; i < n; i++)
        	printf("%d ", arr[i]);
    	printf("\n");

    	free(arr);

    // Test zero-size allocation
    	int *zero_arr = ft_calloc(0, sizeof(int));
    	if (!zero_arr)
        	printf("Zero-size allocation returned NULL (rare case)\n");
    	else
    	{
        	printf("Zero-size allocation returned a valid pointer\n");
        	free(zero_arr); // always safe
    	}

    	return 0;
}*/
