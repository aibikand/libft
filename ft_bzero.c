/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:53:34 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/04 13:40:33 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = s;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
}
/*  void	ft_bzero(void *s, size_t n);
 int main(void)
 {
		unsigned	char	src[30] = "medicos00feos";

		size_t	n = 1;
		ft_bzero(src, n);
		printf("%s", src);
 } */
