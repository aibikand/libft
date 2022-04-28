/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:59:57 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 08:36:00 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/* copia de cadenas limitadas por tamaño. */

/* int	main(void)
{
	char	src[] = "cama";
	char	dst[] = "feli";
	size_t	dstsize;

	dstsize = 5;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%zu\n", strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	return (0);
}
 */
/* me pinta el numero de caracteres que tiene la fuente y
que yo le he igualado al destino
me pinta despues el numero de caracteres que le marque
con el destsize -1, (el '\0')
 */
/* SINOPSIS: copia de cadenas limitadas por tamaño

DESCRIPCIÓN:
Las funciones strlcpy() y strlcat() copian y concatenan cadenas
respectivamente. Están diseñados para ser más seguros, más consistentes y menos
reemplazos propensos a errores para strncpy(3) y strncat(3). A diferencia de esos
funciones, strlcpy() y strlcat() toman el tamaño completo del búfer (no
solo la longitud) y garantía de terminación NUL del resultado (siempre y cuando
el tamaño es mayor que 0 o, en el caso de strlcat(), siempre que haya
al menos un byte libre en dst). Tenga en cuenta que debe incluir un byte para
el NUL en tamaño. También tenga en cuenta que strlcpy() y strlcat() solo funcionan en
cadenas ``C'' verdaderas. Esto significa que para strlcpy() src debe ser NUL-termi-
nated y para strlcat() tanto src como dst deben terminar en NUL.
La función strlcpy() copia hasta el tamaño - 1 carácter del NUL-
cadena terminada src a dst, terminando en NUL el resultado.

copia de cadenas limitadas por tamaño. */
