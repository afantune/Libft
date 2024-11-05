/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afantune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:24:50 by afantune          #+#    #+#             */
/*   Updated: 2024/10/30 14:01:32 by afantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c) == 0)
         printf("%c is not an alphabet.", c);
    else
         printf("%c is an alphabet.", c);

    return 0;
}*/
