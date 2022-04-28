/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:17:51 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:09:29 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lookfor(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_lookfor(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_lookfor(s1[end - 1], set))
	{
		end--;
	}
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

/* recortar el principio y el final de la cadena con
los caracteres especificados. */

/* int	main (void)
{
	char	const	*s;
	char	const	*s1;

	s = "hola buenas tardes";
	s1 = "hosde";

	printf("%s\n", ft_strtrim(s, s1));
	return (0);
} */

/* s1: La string que debe ser recortada.

set: Los caracteres a eliminar de la string.

valor devuelto

La string recortada.
NULL si falla la reserva de memoria.

Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc */

/* Asignar (con malloc) y devolver una copia de la cadena 's1', sin los
caracteres especificados en 'set' al principio y al final de la cadena
caracteres. */
/* La cadena recortada. NULL si falla la asignación. */
