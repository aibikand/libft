/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:59:12 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 08:28:22 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* char mi_funcion(unsigned char i, char str)
{
	 	printf("Mi función: dice = %d y %c\n", i, str);
 	return (str - 32);
}
 */
/* La función striteri es una función que atraviesa una cadena y
aplica la función f.

Se aplica durante la iteración.La razón por la que
el valor del argumento de la función variable f es (char *)
es que el valor de retorno es nulo y la dirección se pasa
como un puntero para que la función pueda aplicar directamente
la función pasando el valor de la dirección. */

/* int main()
{
	char str[20] = "?hola?guapa.?";
	char	i;

	i = 'e';
 	printf("el resultado es: %s\n", str);
	printf("Mi función: dice = %c\n", mi_funcion(i, str));
	char	*resultado = ft_striteri(str, mi_funcion(i, str)); */
/* 	printf("el resultado es: %c\n", mi_funcion(i, str));
 	return 0;
} */

