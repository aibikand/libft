/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:54:38 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 12:33:53 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* Prueba de caracteres alfanuméricos. */

/* DESCRIPTION
     The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  The value of the argument must be
     representable as an unsigned char or the value of EOF. */

	/*  DESCRIPCIÓN
     La función isalnum() prueba cualquier carácter para el cual isalpha(3) o isdigit(3) sea verdadero. El valor del argumento debe ser
     representable como un carácter sin firmar o el valor de EOF. */

/* int	main(void)
{
	int	test;

	test = '?';
	printf("%d\n", ft_isalnum(test));
	return (0);
}
 */
