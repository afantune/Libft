/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <afantune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:58:24 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 17:27:32 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	free_strings(char **strings, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free (strings[i]);
		i ++;
	}
	free (strings);
}

static int	extract_word(char **strings, const char **s, char c, size_t *i)
{
	const char	*word_start;

	word_start = *s;
	while (**s != c && **s)
		(*s)++;
	strings[*i] = ft_substr(word_start, 0, *s - word_start);
	if (!strings[*i])
	{
		free_strings(strings, *i);
		return (0);
	}
	(*i)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;

	strings = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !strings)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!extract_word(strings, &s, c, &i))
				return (NULL);
		}
	}
	strings[i] = NULL;
	return (strings);
}
