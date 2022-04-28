/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:58:27 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 08:50:51 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	adder;

	adder = 0;
	while (s[adder] != '\0')
	{
		adder++;
	}
	return (adder);
}

/* encontrar la longitud de la cadena.

devuelve la longitud de la cadena almacenada en s (no cuenta el 0 final).

DESCRIPCIÓN
     La función strlen() calcula la longitud de la cadena s.
	 La función strnlen() intenta calcular la longitud de s, pero
     nunca escanea más allá de los primeros maxlen bytes de s.

VALORES DEVUELTOS
     La función strlen() devuelve el número de caracteres que
	 preceden al carácter NUL de terminación. La función strnlen()
     devuelve el mismo resultado que strlen() o maxlen, el que sea menor. */
/*
int	main(void)
{
	const char	s[20] = "hello mama ria";
	const char	s1[20] = "hello mama ria";

	printf("%zu\n", ft_strlen(s));
	printf("%zu\n", strlen(s1));
	return (0);
}
 */
