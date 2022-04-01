/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 08:53:29 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/01 11:26:20 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
 {
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	while (dst[x])
	{
		x++;
	}
	while (src[i] != '\0' && i < dstsize)
	{
		dst[x] = src[i];
		x++;
		i++;
	}
	dst[x] = '\0';
	return (x);
}
int	main(void)
{
	char src[] = "buenas";
	char dst[] = "hola";
	size_t val;

	size_t dstsize = 6;
	val = ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("%zu", val);
	return (0);
}
