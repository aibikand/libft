/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:50:39 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 12:46:17 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* prueba de carácter ASCII. */

/* DESCRIPTION
     The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive. */

/* int	main(void)
{
	int	test;

	test = '_';
	printf("%d\n", ft_isascii(test));
	return (0);
} */
