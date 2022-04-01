/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:27:10 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/01 13:40:51 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	while (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
		{
			c = c - 'a' + 'A';
		}
		c++;
	}
	return (c);
}

int main()
{
    int j = 0;
    char str[] = "so BUrra!!358\n";
    char ch;

    while (str[j])
	{
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
	return 0;
}
