/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:07:44 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 15:01:42 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i ++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	t_list	*list;
	t_list	*current;
	t_list	*next;
	int	size;

	list = NULL;
	ft_lstadd_front(&list, ft_lstnew("Node 1"));
	ft_lstadd_front(&list, ft_lstnew("Node 2"));
	ft_lstadd_front(&list, ft_lstnew("Node 3"));

	size = ft_lstsize(list);
	printf("Size of the list: %d\n", size);

	current = list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	return (0);
}*/
