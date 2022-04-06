/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:05:20 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/06 08:09:03 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}
/* int	main(void)
{
   int i = 0;
   char str[] ="ASKJFLL";

	while(str[i])
   	{
    	putchar(ft_tolower(str[i]));
      i++;
   	}
	return(0);
} */
