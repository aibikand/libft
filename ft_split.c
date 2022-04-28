/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:47:15 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 13:19:40 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_split_line(char const *s, char c)
{
	int	lines;
	int	i;

	i = 0;
	lines = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			lines++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
		if (s[i])
		{
			i++;
		}
	}
	return (lines);
}

char	*ft_split_printable(char const *s, char c, int j)
{
	int		i;
	int		count;
	char	*print;

	print = NULL;
	i = -1;
	count = -1;
	while (++i < (int)ft_strlen(s) && s[i])
	{
		if (s[i] != c)
			count++;
		if (count == j && s[i] != c)
		{
			count = i;
			while (s[count] && s[count] != c)
				count++;
			print = ft_substr(s, i, count - i);
			if (!print)
				return (NULL);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (print);
}

char	**ft_split(char const *s, char c)
{
	char	**strgs;
	int		lines;
	int		i;

	if (!s)
		return (NULL);
	lines = ft_split_line(s, c);
	if (c == '\0' && ft_strlen(s) > 0)
		lines = 1;
	strgs = (char **)ft_calloc(lines + 1, sizeof(char *));
	if (strgs == NULL)
		return (NULL);
	i = 0;
	while (i < lines)
	{
		strgs[i] = ft_split_printable(s, c, i);
		if (strgs[i] == NULL)
			return (NULL);
		i++;
	}
	strgs[i] = NULL;
	return (strgs);
}

/*La función split es una función que recibe una cadena y un delimitador,
divide la cadena por delimitadores y devuelve una matriz de cadenas bidimensional.

Determina la longitud de las palabras (separadas por conjuntos) en una cadena.
A diferencia de la división, que estudiamos anteriormente, no se considera
el espacio en blanco, pero sí el delimitador.
Debido a que la asignación dinámica debe realizarse correctamente,
asigna dinámicamente según el tamaño.
Se necesitan muchas funciones internas,
así que declare static o agregue una función para usarla.*/
	
/* cadena dividida, con el carácter especificado como delimitador,
en una matriz de cadenas. */

/* DESCRIPCIÓN
     La utilidad split lee el archivo dado y lo divide en archivos de
	 1000 líneas cada uno. Si el archivo es un solo guión (`-') o
     ausente, divide las lecturas de la entrada estándar. */

/* int	main(void)
{
	char	**bi_str;

	bi_str = ft_split("hello!", ' ');
	printf("String: %s \n", bi_str[2]);
	free(bi_str);
	return (0);
} */

/* int main()
{
char	str[20] = "*pepe*come**fruta.";
char	**result = ft_split("\0aa\0bbb", '\0');
printf("The result is:  %s\n", result[0]);
printf("The result is:  %s\n", result[1]);
printf("The result is:  %s\n", result[2]);
return (0);
} */
