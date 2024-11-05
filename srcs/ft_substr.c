/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:08:14 by afantune          #+#    #+#             */
/*   Updated: 2024/10/30 14:53:15 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
/*
#include <stdio.h>

int main() 
{
	char	*string = "Hello, World!";
	char	*substr;

	substr = ft_substr(string, 7, 5);
    	printf("Substring (7, 5): '%s'\n", substr);
	free(substr);

	substr = ft_substr(string, 15, 5);
	printf("Substring (15, 5): '%s'\n", substr);
	free(substr);

	substr = ft_substr(string, 5, 100);
	printf("Substring (5, 100): '%s'\n", substr);
	free(substr);

	substr = ft_substr(string, 0, 13);
	printf("Substring (0, 13): '%s'\n", substr);
	free(substr);

	substr = ft_substr("", 0, 5);
	printf("Substring (empty, 0, 5): '%s'\n", substr);
	free(substr);

	substr = ft_substr(NULL, 0, 5);
	printf("Substring (NULL, 0, 5): '%s'\n", substr);
	free(substr);
}*/
