/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:16:27 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 08:15:40 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	char	*s1_new;
	int		size;

	size = ft_strlen(s1);
	s1_new = malloc(sizeof(char) * size + 1);
	if (!s1_new)
		return (NULL);
	count = 0;
	while (s1[count] != '\0')
	{
		s1_new[count] = s1[count];
		count++;
	}
	s1_new[count] = s1[count];
	return (s1_new);
}

/* guardar una copia de una cadena (con malloc). */


/* DESCRIPCIÓN
     La función strdup() asigna suficiente memoria para una copia
	 de la cadena s1, hace la copia y le devuelve un puntero.
     El puntero se puede utilizar posteriormente como argumento
	 de la función free(3).

     Si no hay suficiente memoria disponible, se devuelve NULL
	 y errno se establece en ENOMEM.

     La función strndup() copia como máximo n caracteres de
	 la cadena s1 siempre NUL terminando la cadena copiada. */

/* int	main(void)
{
	printf("%s\n", ft_strdup("hola Mundo!!"));
	printf("%s\n", strdup("hola Mundo!!"));
	return (0);
} */

/* El operador sizeof proporciona la cantidad de almacenamiento,
en bytes, necesaria para almacenar un objeto del tipo del operando.
Este operador permite no tener que especificar tamaños de datos dependientes
del equipo en los programas */
