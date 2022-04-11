/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:59:57 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/11 13:38:34 by aibikand         ###   ########.fr       */
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
	char	src[] = "felipa";
	char	dst[] = "pepe";
	size_t	dstsize;

	dstsize = 3;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%zu\n", strlcpy(dst, src, dstsize));
	return (0);
}
 */
