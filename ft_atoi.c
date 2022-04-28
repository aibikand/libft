/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:46:43 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:34:36 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)(res * sign));
}

/* ATOI(3) es una función de biblioteca C estándar.

La parte inicial de la cadena de entrada se devuelve como un tipo int.

Es decir, una función que devuelve la cadena de entrada como un número.

Se ignoran todos los espacios en blanco al principio de la cadena.
String reconoce los primeros signos + y -.
Incluyendo las reglas anteriores, solo los números se reconocen y se convierten a int.
Resuelve usando isspace(3) e isdigit(3). */

/* DESCRIPCIÓN
     La función atoi() convierte la parte inicial de la cadena a la que apunta str en representación int. */

/* convertir cadena ASCII a entero. */

/*
int main(void)
{
	char *s = " 98764 987";
	printf("%d %d", ft_atoi(s), atoi(s));
	return (0);
} */

