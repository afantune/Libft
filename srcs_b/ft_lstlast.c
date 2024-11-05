/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:27:01 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 14:58:38 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
        t_list  *list;
        t_list  *current;
        t_list  *next;
        t_list	*last_node;

        list = NULL;
        ft_lstadd_front(&list, ft_lstnew("Node 1"));
        ft_lstadd_front(&list, ft_lstnew("Node 2"));
        ft_lstadd_front(&list, ft_lstnew("Node 3"));

        last_node = ft_lstlast(list);
        printf("The last node is: %s\n", (char *)last_node->content);

        current = list;
        while (current != NULL)
        {
                next = current->next;
                free(current);
                current = next;
        }
        return (0);
}*/
