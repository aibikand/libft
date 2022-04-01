/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:13:16 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/01 15:01:25 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned	char *)dst)[i] = ((const	char *)src)[i];
		i++;
	}
	return (dst);
}
int main (void)
{
	unsigned char	str[]= "buenastardesguapa";
	unsigned char	dest[50] = "88888888888888888888888";

	size_t n = 5;
	ft_memcpy(dest, str, n);
	printf("%s\n", dest);
	printf("%s\n", memcpy(dest, str, n));
}
