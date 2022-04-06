/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2022/04/05 20:13:32 by marvin            #+#    #+#             */
/*   Updated: 2022/04/05 20:13:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}

/* mayor que cero si se encuentran los primeros n bytes de s1, */
/* respectivamente, ser menor que, coincidir o ser mayor que el */
/* primeros n bytes de s2. */
/* Para un valor devuelto distinto de cero,
	el signo está determinado por el signo de */
/* la diferencia entre el primer par de bytes (interpretado como */
/* char sin firmar) que difieren en s1 y s2. */
/* Si n es cero, el valor devuelto es cero. */
