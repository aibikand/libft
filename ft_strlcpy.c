/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:59:57 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/06 09:32:48 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*srctmp;
	size_t	i;

	if (!dst && !src)
	{
		return (0);
	}
	srctmp = (char *)src;
	if (dstsize > 0)
	{
		while (*srctmp && --dstsize)
		{
			*(dst++) = *(srctmp++);
			*dst = '\0';
		}
	}
	return (ft_strlen(src));
} */
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
		i++;
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
