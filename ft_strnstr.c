/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:34:33 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/27 11:16:56 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/* localizar una subcadena en una cadena

Si needle es una cadena vacía, se devuelve haystack ;
si la needle no aparece en ninguna parte del haystack,
se devuelve NULL; de lo contrario, se devuelve un puntero
al primer carácter de la primera aparición de needle. */

/* int main()
{
	size_t x;

	x = 4;
	char *b = "Foo Bar Baz";
    char *c = "Bar";
    char *d = ft_strnstr(b,c,x);
	char *ptr = strnstr(b, c, x);
    printf("%s\n",ptr);
    printf("%s",d);
} */
