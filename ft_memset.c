/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:35:51 by aibikand          #+#    #+#             */
/*   Updated: 2022/03/29 15:35:46 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = b; /* convertimos void en char */
	while (i < len && src[i])
	{
		src[i] = (unsigned char)c; /* convertimos c en char */
		i++;
	}
	return (src); /* retornamos el string ya convertido */
}

/* int	main(void)
{
	unsigned char	src[];

	src[] = "buenastardesguapa";
	int c = ' ';     //doy el valor que va a cambiar
	size_t len = 7; //doy los lugares que cambia
	printf("%s\n", ft_memset(src, c, len));
	//printf("%s\n", memset(src, c, len));   //funcion original
} */
