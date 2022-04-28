/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:02:44 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 12:46:52 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* prueba de carácter alfabético */

/* DESCRIPCIÓN
     La función isalpha() prueba cualquier carácter para el cual isupper(letras mayúsculas)
	 o islower(letras minúsculas) sea verdadero. El valor del argumento debe ser
     representable como un carácter sin firmar o el valor de EOF. */

/* int	main(void)
{
	int	test;

	test = 'A';
	printf("%d\n", ft_isalpha(test));
	return (0);
} */
