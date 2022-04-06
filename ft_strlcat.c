/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 08:53:29 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/05 13:40:36 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	orig;
	size_t	i;

	i = 0;
	dest = ft_strlen(dst);
	orig = ft_strlen(src);
	if (dstsize < dest + 1)
	{
		return (orig + dstsize);
	}
	while (dest + i + 1 < dstsize && src[i] != '\0')
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
	char		dst[] = "bue";
	const char	src[] = "hola";
	size_t		val;

	dstsize = 6;
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
