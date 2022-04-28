/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 08:24:53 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:14:19 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len <= 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/* extraer subcadena de cadena. */

/* substr es una función que devuelve una nueva cadena al copiar
desde la longitud de inicio hasta la longitud de len en la cadena de s.

manejo nulo de s
Devuelve una cadena vacía si la longitud de s es menor que la longitud de inicio
+1 para manejar el carácter '\0' porque es una cadena */

/* int	main(void)
{
	char	*s;

	s = "hola buenas tardes";
	printf("%s\n", ft_substr(s, 25, 8));
	return(0);
} */
