/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:10:08 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 15:12:26 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		if (f != NULL)
		{
			while (lst != NULL)
			{
				f(lst->content);
				lst = lst->next;
			}
		}
	}
}
