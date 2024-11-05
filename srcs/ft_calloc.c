/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:34:38 by afantune          #+#    #+#             */
/*   Updated: 2024/10/29 11:48:20 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	total;
	void	*p;

	total = n * size;
	p = malloc(total);
	if (p == NULL)
	{
		return (NULL);
	}
	if (n != 0 && total / n != size)
	{
		return (NULL);
	}
	ft_memset(p, 0, total);
	return (p);
}
