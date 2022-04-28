/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:17:55 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 12:52:51 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* prueba de carácter de impresión (carácter de espacio incluido). */

/* DESCRIPCIÓN
    La función isprint() comprueba cualquier carácter de impresión,
	incluido el espacio (` '). El valor del argumento debe ser
	representable como un carácter sin firmar o el valor de EOF. */

/* int	main(void)
{
	int	test;

	test = '?';
	printf("%d\n", isprint(test));
	printf("%d\n", ft_isprint(test));
	return (0);
} */
