/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:25:12 by afantune          #+#    #+#             */
/*   Updated: 2024/10/30 11:24:40 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
	{
		return ((char *)str);
	}
	while (i < n && str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == find[j] && str[i + j] != '\0' && (i + j) < n)
			j++;
		if (find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
