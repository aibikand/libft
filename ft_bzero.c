/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:53:34 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 12:30:59 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = s;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
}

/*  int main(void)
 {
		unsigned	char	src[14] = "medicos00feos";

		size_t	n = 15;
		ft_bzero(src, n);
		printf("la cadena nueva es : %s", src);
 } */

/* DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.
	 If n is zero, bzero() does nothing. */

/* DESCRIPCIÓN
     La función bzero() escribe n bytes puestos a cero en la cadena s.
	 Si n es cero, bzero() no hace nada. */
