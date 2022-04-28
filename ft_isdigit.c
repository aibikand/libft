/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:55:42 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 12:49:35 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* Prueba de caracteres de dígitos decimales. */


/* DESCRIPCIÓN
     La función isdigit() prueba un carácter de dígito decimal.
	 Independientemente de la configuración regional,
	 esto incluye solo los siguientes caracteres: 0 1 2 3 4 5 6 7 8 9 */

/* int	main(void)
{
	int	test;

	test = '1';
	printf("%d\n", ft_isdigit(test));
	return (0);
} */
