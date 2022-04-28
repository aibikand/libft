/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:09:13 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:46:42 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		size = 1;
	}
	if (nb / 10 == 0)
		return (size + 1);
	else
		nb = nb / 10;
	return (size + ft_len(nb) + 1);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	i;
	size_t			len;
	long			nb;

	nb = n;
	len = ft_len(nb);
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		res[0] = '-';
	}
	if (nb == 0)
		res[len] = '0';
	i = 0;
	while (i <= len && nb > 0)
	{
		res[len - i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}

/* La función itoa convierte un número en una cadena y lo devuelve.

Necesitamos una función para manejar una excepción para 0
y encontrar la longitud del número. */

/* convertir entero a cadena ASCII. */

/* al reves que atoi */

/* 	int main()
{
	int		nmb;
	char	*val;

	nmb = 'b';
	val = ft_itoa(nmb);
	printf("este es el número : %d\n", nmb);
	printf("este es el string : %s\n", val);
	return (0);
} */
/* int	main(void)
{
	printf("%s\n", ft_itoa(122));
	return (0);
} */
