/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:08:52 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:38:42 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* salida de un carácter a un archivo dado. */

/* La función putchar_fd es una función que envía c caracteres
como una cadena de bytes al flujo abierto con el
correspondiente fd (valor del descriptor de archivo) */

/* int	main(void)
{
	char	c;
	int		fd;

	c = 'M';
	fd = 1;
	ft_putchar_fd(c, fd);
} */
