/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:04:07 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 15:57:19 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;
	int	i;

	i = -1;
	last = 0;
	while (i == -1 || s[i])
	{
		if (s[i + 1] == (char)c)
			last = i + 1;
		i++;
	}
	if (s[last] == (char)c)
		return ((char *)&s[last]);
	return (NULL);
}
