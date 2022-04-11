/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:59:57 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/11 18:55:28 by marvin           ###   ########.fr       */
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
		dst[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	src[10];
	char	dst[10];
	size_t	dstsize;

	src[10] = "";
	dst[10] = "pepe";
	dstsize = 3;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s", dst);
	return (0);
}
 */
