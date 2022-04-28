/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:07:58 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 08:32:14 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	y1;
	unsigned int	y2;
	unsigned int	i;
	unsigned int	x;
	char			*str1;

	if (!s1 || !s2)
		return (NULL);
	y1 = ft_strlen(s1);
	y2 = ft_strlen(s2);
	i = 0;
	x = -1;
	str1 = malloc(sizeof(char) * (y1 + y2 + 1));
	if (!str1)
		return (NULL);
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	while (s2[++x])
		str1[i++] = s2[x];
	str1[i] = '\0';
	return (str1);
}
/*
concatenar dos cadenas en una nueva cadena (con malloc). */

/* strjoin, se devuelve una nueva cadena con s1 seguida de s2.

Compruebe la longitud de s1 y s2 e inserte un carácter nulo */

/* int	main(void)
{
	char	primero[] = "maricarmencita";
	char	segundo[] = "julianapepa";

	printf("%s\n", ft_strjoin(primero, segundo));
	return (0);
} */
