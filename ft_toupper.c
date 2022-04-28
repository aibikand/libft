/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:27:10 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:22:30 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/* DESCRIPCIÓN
     La función toupper() convierte una letra minúscula en la
	 letra mayúscula correspondiente. El argumento debe ser representable.
     como un carácter sin firmar o el valor de EOF.

     Aunque la función toupper() utiliza la configuración regional actual,
	 la función toupper_l() puede recibir una configuración regional directamente. Ver
     xlocale(3) para obtener más información.

VALORES DEVUELTOS
     Si el argumento es una letra minúscula, la función toupper() devuelve
	 la letra mayúscula correspondiente, si la hay; otro-
     De lo contrario, el argumento se devuelve sin cambios. */

/* int main()
{
    int j = 97;

    printf("%d\n", ft_toupper(j));
	return (0);
} */
