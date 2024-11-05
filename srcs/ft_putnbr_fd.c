/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:49:43 by afantune          #+#    #+#             */
/*   Updated: 2024/10/30 13:56:34 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = (unsigned int)(-nb);
	}
	else
	{
		n = (unsigned int)nb;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd('0' + (n % 10), fd);
}
