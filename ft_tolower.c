/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:05:20 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:21:00 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}

/* conversión de mayúsculas a minúsculas. */

/* DESCRIPCIÓN
     La función tolower() convierte una letra mayúscula en la letra
	 minúscula correspondiente. El argumento debe ser representable.
     como un carácter sin firmar o el valor de EOF.

     Aunque la función tolower() usa la configuración regional actual, la función
	 tolower_l() puede pasar una configuración regional directamente. Ver
     xlocale(3) para obtener más información.

VALORES DEVUELTOS
     Si el argumento es una letra mayúscula, la función tolower()
	 devuelve la letra minúscula correspondiente, si la hay;
     de lo contrario, el argumento se devuelve sin cambios. */

/* int	main(void)
{
   int i = 0;
   char str[] ="ASKJFLL";

	while(str[i])
   	{
    	putchar(ft_tolower(str[i]));
      i++;
   	}
	return(0);
} */
