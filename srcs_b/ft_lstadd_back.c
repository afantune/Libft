/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:08:19 by afantune          #+#    #+#             */
/*   Updated: 2024/11/04 16:03:53 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		current = *lst;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
}
/*
#include <stdio.h>

void    print_list(t_list *list)
{
        while (list != NULL)
        {
                printf("%s -> ", (char *)list->content);
                list = list->next;
        }
        printf("NULL\n");
}

int     main(void)
{
        t_list  *list;
        t_list  *node1;
        t_list  *node2;
        t_list  *node3;
        t_list  *current;
        t_list  *next;

        list = NULL;
        node1 = ft_lstnew("Node 1");
        node2 = ft_lstnew("Node 2");
        node3 = ft_lstnew("Node 3");
        ft_lstadd_back(&list, node1);
        ft_lstadd_back(&list, node2);
        ft_lstadd_back(&list, node3);

        print_list(list);
        current = list;
        while (current != NULL)
        {
                next = current->next;
                free(current);
                current = next;
        }
        return 0;
}
*/
/*
 * Checks if list is empty
 * if (*list ==NULL)
        {
                *list = new;
                new->next = NULL;
        }
 *If it isnt empty it will add a node to the back of the list:
 *while (current->next != NULL) Goes to the end of the list.
 *current->next = Assigns the new node to the end of the linked list.
 */
