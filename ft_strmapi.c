/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 09:37:07 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 08:58:14 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* crear una nueva cadena a partir de la modificación
de la cadena con la función especificada. */

/* Una función que devuelve una cadena creada al aplicar la función f
a la cadena original

Atraviesa la cadena s, aplica la función 'f' y crea una nueva cadena.
¡El manejo nulo es importante! */

/*
char mi_funcion(unsigned int i, char str)
{
	 	printf("Mi función: dice = %d y %c\n", i, str);
 	return (str - 32);
} */
/*
int main()
{
	char str[20] = "?hola?guapa.?";
 	printf("el resultado es: %s\n", str);
 	char *resultado = ft_strmapi(str, mi_funcion);
 	printf("el resultado es: %s\n", resultado);
 	return 0;
}
 */
