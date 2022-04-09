/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:34:33 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/07 12:53:58 by aibikand         ###   ########.fr       */
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

/* int main()
{
	char *b = "go go yogurt";
    char *c = "guner";
    char *d = ft_strnstr(b,c,'k');
    char *e = strnstr(b,c,'k');
    printf("%s\n",e);
    printf("%s",d);
} */

/* La función strnstr() localiza la primera aparición de la terminación nula
string little en la cadena big, donde no hay más de len carácter
buscado */
/* Si little es una cadena vacía,
	se devuelve big; si poco ocurre en ninguna parte en
grande, se devuelve NULL; de lo contrario,
	un puntero al primer carácter de la primera
se devuelve la ocurrencia de poco. */
