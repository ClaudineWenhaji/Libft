/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:13:44 by clwenhaj          #+#    #+#             */
/*   Updated: 2025/11/16 14:59:05 by clwenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// count_words: 
// Counts the number of words in the string s, c: separator.
// i: index of the current character in s.
// nbr_of_words: track of how many words we found.
// Loop over the string until the end (while (s[i])):
// 1.If the current character is not the delimiter c, it's the start of a word:
// 	*** Increment nbr_of_words.
// 	*** Skip all characters until the next delimiter 
// 		(this moves i forward to the end of the word).
// 2.Otherwise, if it's a delimiter, just move to the next character.
// Return the total word count.
//
// free_all: 
// Frees memory allocated for an array of strings str in case of error
// 	* Loops backwards from index j and frees each string.
// 	* Finally, frees the array itself.
// This prevents memory leaks if malloc fails in word_splitter.
//
// Word_splitter: 
// extract a single word from the string s until the delimiter c
// 	* Count the length of the word (len) until the next delimiter or string end
// 	* Allocate memory for the word (len + 1 for the null terminator)
//	   -> if allocation fails, some words might have already 
//	   			been allocated in the words array
//	   -> to prevent memory leaks, we need to free all 
//	   			the previously allocated strings.
//	   -> free_all(str, j - 1): str is the array of strings allocated so far.
//				    j-1 is the index of the last successfully allocated word.
//				    free_all loops backward and frees each word, 
//				    then frees the str array itself.
// 	* Copy characters from s into the new string.
// 	* Null-terminate the word
// 	* Return the word.
//
// ft_split:
// 1.Count the number of words and 
// 	allocate memory for the array of strings (words). 
// 	Add 1 for the NULL terminator.
// 2.Loop over the string:
// 	* If a character is not the delimiter:
// 		Call word_splitter to get the word.
// 		Move i past the word.
// 		Increment j (word index in words array).
//	* If a character is a delimiter, skip it.
// 3.Set the last element words[j] = NULL to mark the end of the array.
// 4.Return the array.

#include "libft.h"

int	count_words(const char *s, char c)
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
	while (j >= 0)
		free(str[j--]);
	free(str);
}

char	*word_splitter(const char *s, char c, char **str, int j)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
	{
		free_all(str, j - 1);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
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
	if (!s || !words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c, words, j);
			if (!words[j])
				return (NULL);
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
