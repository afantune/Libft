/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:47:44 by afantune          #+#    #+#             */
/*   Updated: 2024/10/30 12:55:14 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start ++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end --;
	}
	len = end - start;
	if (len == 0)
	{
		return (ft_strdup(""));
	}
	return (ft_substr(s1, start, len));
}
