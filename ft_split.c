/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agragera <agragera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 02:25:46 by agragera          #+#    #+#             */
/*   Updated: 2024/03/13 02:25:46 by agragera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int		count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static char	*ft_dup_word(const char *s, char c)
{
	int		length;
	char	*word;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	word = (char *)malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, length + 1);
	return (word);
}

static void	*ft_free_array(char **arr, int index)
{
	while (index-- > 0)
		free(arr[index]);
	free(arr);
	return (NULL);
}

static char	**ft_allocate_split(char const *s, char c, int word_count)
{
	char	**split;
	int		i;

	i = 0;
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			s++;
		split[i] = ft_dup_word(s, c);
		if (!split[i])
			return (ft_free_array(split, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	split[word_count] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_allocate_split(s, c, ft_count_words(s, c)));
}
