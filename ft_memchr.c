/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:22:47 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/06 10:30:12 by aibikand         ###   ########.fr       */
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
/* busca en str el primer caracter que concuerde con c
y devuelve un puntero al caracter que concuerda
o null si no lo hay*/
