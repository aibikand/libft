/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:35:51 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 13:14:45 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)b;
	while (i < len)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return ((void *)src);
}

/* escribir un byte en una cadena de bytes */

/* DESCRIPTION
     The memset() function writes len bytes of value c
	 (converted to an unsigned char) to the string b. */

/* RETURN VALUES
     The memset() function returns its first argument. */

/* int	main(void)
{
	unsigned char	src[20] = "buenastar42desguapa";
	unsigned char	src2[20] = "buenastar42desguapa";

	int c = 'p';     //doy el valor que va a cambiar
	size_t len = 12; //doy los lugares que cambia
	printf("%s\n", ft_memset(src, c, len));
	printf("%s\n", memset(src2, c, len));   //funcion original
} */

/* en este caso pinta la 'p' 12 veces en el string y despues sigue con
 lo escrito en el string, resultado = ppppppppppppesguapa */
