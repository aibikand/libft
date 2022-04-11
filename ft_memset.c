/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:35:51 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/11 12:51:10 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)b;/* convertimos void en char */
	while (i < len)
	{
		src[i] = (unsigned char)c;/* convertimos c en char */
		i++;
	}
	return ((void *)src);/* retornamos el string ya convertido */
}

/* int	main(void)
{
	unsigned char	src[20] = "buenastar42desguapa";
	unsigned char	src2[20] = "buenastar42desguapa";

	int c = 7;     //doy el valor que va a cambiar
	size_t len = 5; //doy los lugares que cambia
	printf("%s\n", ft_memset(src, c, len));
	printf("%s\n", memset(src2, c, len));   //funcion original
} */
