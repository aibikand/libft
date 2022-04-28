/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 08:53:29 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/25 09:25:58 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	orig;
	size_t	i;

	i = 0;
	orig = ft_strlen(src);
	dest = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dest)
	{
		return (dstsize + orig);
	}
	while (i < (dstsize - dest - 1) && src[i])
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + orig);
}

/* 	int main(void)
{
	size_t		dstsize;
	char		dst[] = "buenas noches";
	const char	src[] = "hola tia como estas";
	size_t		val;

	dstsize = 16;
	printf("Este es el valor de la funcion de Aitor:\n");
	ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("Este es el valor del retorno de la funcion de Aitor:\n");
	val = ft_strlcat(dst, src, dstsize);
	printf("%zu\n", val);
	printf("Este es el resultado de la funcion original:\n");
	strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	return (0);
} */
/* SINOPSIS: concatenación de cadenas limitadas por tamaño

DESCRIPCIÓN:
Las funciones strlcpy() y strlcat() copian y concatenan cadenas
respectivamente. Están diseñados para ser más seguros, más consistentes y menos
reemplazos propensos a errores para	strncpy(3) y strncat(3). A diferencia de esos
funciones, strlcpy() y strlcat() toman el tamaño completo del búfer (no
solo la longitud) y garantía de terminación NUL del resultado (siempre y cuando
el tamaño es mayor que 0 o, en el caso de strlcat(), siempre que haya
al menos un byte libre en dst). Tenga en cuenta que debe incluir un byte para
el NUL en tamaño. También tenga en cuenta que strlcpy() y strlcat() solo funcionan en
cadenas ``C'' verdaderas. Esto significa que para strlcpy() src debe ser NUL-termi-
nated y para	strlcat(void) tanto src como dst deben terminar en NUL.
La función strlcat() agrega la cadena src terminada en NUL al final
del horario de verano Se agregará al tamaño máximo - strlen (dst) - 1 bytes,
terminando el resultado en NUL. */

/*  concatenación de cadenas limitadas por tamaño. */
