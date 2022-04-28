/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:09:49 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 13:13:12 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*origen;

	dest = (char *)dst;
	origen = (char *)src;
	if (dest > origen)
	{
		while (len--)
		{
			dest[len] = origen[len];
		}
	}
	else if (dest < origen)
	{
		ft_memcpy(dst, src, len);
	}
	return (dest);
}

/* copia cadena de bytes. */

/* DESCRIPCIÓN
     La función memmove() copia len bytes de la cadena src a la cadena dst.
	  Las dos cadenas pueden superponerse; la copia siempre se hace en
     una manera no destructiva.

VALORES DEVUELTOS
     La función memmove() devuelve el valor original de dst. */

/* int	main(void)
{
	unsigned char	src[]= "buenas noches";
	unsigned char	dest[] = "88888888888888888";

	size_t len = 5;
	printf("%s\n", ft_memmove(dest, src, len));
	printf("%s\n", memmove(dest, src, len));
} */
