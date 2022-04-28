/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 08:16:19 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:01:19 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		if (s1[i] < s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

/* comparar cadenas (limitado por tamaño). */

/* DESCRIPCIÓN
     Las funciones strcmp() y strncmp() comparan lexicográficamente
	 las cadenas terminadas en cero s1 y s2.

     La función strncmp() no compara más de n caracteres.
	 Debido a que strncmp() está diseñado para comparar cadenas en lugar de
     datos binarios, los caracteres que aparecen después
	 de un carácter `\0' no se comparan.

VALORES DEVUELTOS
     Las funciones strcmp() y strncmp() devuelven un número entero mayor,
	 igual o menor que 0, según sea la cadena s1.
     mayor que, igual o menor que la cadena s2. La comparación se realiza
	 utilizando caracteres sin signo, por lo que `\200' es mayor que '\0'. */

/* int main (void)
{
	const char s1[20] = "plectricidad";
	const char s2[20] = "maricarmen";
	int i;

	size_t n = 5;
	i = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
	printf("%d\n", strncmp(s1, s2, n));
	return (0);
} */
/* Sirve para comparar n caracteres entre cadena2 y cadena1 .

Devuelve el valor devuelve 0 si son iguales.

Devuelve menor que cero si el primer caracter diferente
de la cadena1 es menor que cadena2 .

Devuelve mayor que cero si el primer caracter diferente
de la cadena1 es mayor que cadena2  */
