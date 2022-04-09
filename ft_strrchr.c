/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:01:06 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/06 12:02:25 by aibikand         ###   ########.fr       */
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
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}

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