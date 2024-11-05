/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:13:11 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 15:48:40 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	if (!s || !f)
		return (NULL);
	s1 = ft_strdup(s);
	if (!s1)
		return (NULL);
	i = -1;
	while (s1[++i])
		s1[i] = f(i, s1[i]);
	return (s1);
}
/*
char	to_upper(unsigned int i char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	*original = "hello world";
	char	*modified;

	modified = ft_strmapi(original, to_upper);
	if (modified)
	{
		printf("Original: %s\n", original);
		printf("Modified: %s\n", modified);
		free(modified);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
}*/
