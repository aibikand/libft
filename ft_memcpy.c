/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:13:16 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 13:10:26 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/* copiar área de memoria. */

/* DESCRIPCIÓN
     La función memcpy() copia n bytes del área de memoria src al área de memoria dst.
	 Si dst y src se superponen, el comportamiento no está definido.
     Las aplicaciones en las que dst y src pueden superponerse deberían
	 usar memmove(3) en su lugar.

VALORES DEVUELTOS
     La función memcpy() devuelve el valor original de dst. */

/* int	main(void)
{
	char src[] = "buenas";
	char dst[] = "hola";
	size_t val;

	size_t dstsize = 6;
	val = ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("%zu", val);
	return (0);
} */
