/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:22:05 by afantune          #+#    #+#             */
/*   Updated: 2024/10/30 11:30:17 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	int		j;
	char	*dest;
	char	*d;

	j = 0;
	d = ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[j])
	{
		dest[j] = src[j];
		j ++;
	}
	dest[j] = '\0';
	return (dest);
}
