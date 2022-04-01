/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:09:49 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/01 15:53:00 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		ft_memmove(dst, src, len);
	}
	return (dst);
}
int	main(void)
{
	unsigned char	src[]= "buenas noches";
	unsigned char	dest[] = "888888888888888888888";

	size_t len = 5;
	/* printf("%s\n", ft_memmove(dest, src, len)); */
	printf("%s\n", memmove(dest, src, len));
}