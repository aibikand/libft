/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:22:47 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 13:06:56 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (0);
}

/* DESCRIPCIÓN
     La función memchr() localiza la primera aparición de c
	 (convertido a un carácter sin signo) en la cadena s.

VALORES DEVUELTOS
     La función memchr() devuelve un puntero al byte ubicado,
	 o NULL si no existe tal byte dentro de n bytes. */

/* int	main(void)
{
	char	cadena[] = "Erase una vez...";
	char	*puntero;

	puntero = (char *)memchr(cadena, 'a', 3);
	printf("%s\n", cadena);
	printf("%s\n", puntero);
	puntero = (char *)ft_memchr(cadena, 'a', 3);
	printf("%s\n", cadena);
	printf("%s\n", puntero);
	return (0);
} */

/* localizar el byte en la cadena de bytes. */

/* busca en str el primer caracter que concuerde con c
y devuelve un puntero al caracter que concuerda
o null si no lo hay*/
