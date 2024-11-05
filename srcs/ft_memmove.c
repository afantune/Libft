/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:05:21 by afantune          #+#    #+#             */
/*   Updated: 2024/10/29 10:37:00 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		while (n --)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n --)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
