/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:13:44 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/10 18:13:48 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Counts sequences of characters not equal to the delimiter.
//Skips over contiguous delimiters.
//Works even if there are multiple spaces or delimiters between words
static int	count_words(const char *s, char c)
{
	int	i;
	int	nbr_of_words;

	i = 0;
	nbr_of_words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nbr_of_words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nbr_of_words);
}

void	free_all(char **str, int j)
{
	j--;
	while (j >= 0)
		free(str[j--]);
	free(str);
}

static char	*word_splitter(const char *s, char c, char **str, int j)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
	{
		free_all(str, j);
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c, words, j);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}
/*
void	free_double_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

int	main(void)
{
	char	**str;

	int	i = 0;
	str = ft_split("coucou les amis", ' ');
	while (str[i])
		printf("%s\n", str[i++]);
	free_double_array(str);
	return (0);
}*/
