/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:31:56 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/02 12:58:27 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char *)s;

	while (*str)
	{
		if (*str == c)
		{
		str++;
		}
	}
	return(NULL);
}

/*
int main ()
{
   const char str[] = "MariPepaandres";
   const char ch = 'd';
   char *ret;

   ret = strchr(str, ch);

   printf("%s", ret);

   return(0);
} */
/* Declaración: char *strchr(const char *cadena, int caracter);

Parámetros: La cadena a analizar, la letra que se busca

Valor devuelto: La posición (puntero) o NULL

if (strchr(texto,letra) == NULL) puts("No la contiene");

Detalles:
Devuelve NULL si no la contiene, o un puntero a la posición en que se encuentra, en caso contrario */
