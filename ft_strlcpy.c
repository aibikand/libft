/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:59:57 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/01 08:51:00 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (x < dstsize && src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	while (x < dstsize)
	{
		dst[x] = '\0';
		x++;
	}
	if (src == NULL || dst == NULL)
	{
		return (0);
	}
	return (i);
}
/*
int	main(void)
{
	char		src[10] = "";
	char		dst[10] = "pepe";
	size_t dstsize = 3;

	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s", dst);
	return (0);
} */
