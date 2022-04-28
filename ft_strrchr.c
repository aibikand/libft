/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:01:06 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:08:16 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}

/* DESCRIPCIÓN

     La función strrchr() es idéntica a strchr(),
	 excepto que localiza la última aparición de c.

VALORES DEVUELTOS
     Las funciones strchr() y strrchr() devuelven
	 un puntero al carácter localizado, o NULL
	 si el carácter no aparece en el strig. */

/* int main ()
{
   const char str[] = "MariPedpaandres      ";
   const char ch = 'w';
   char *ret;

   ret = ft_strrchr(str, ch);
   printf("%s\n", ret);

    ret = strrchr(str, ch);
   	printf("%s\n", ret);
	return(0);
} */
