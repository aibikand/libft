/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 08:51:33 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:40:09 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	count;
	unsigned int	i;

	if (!s)
	{
		return ;
	}
	i = 0;
	count = ft_strlen(s);
	while (i < count)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/* cadena de salida al archivo dado con nueva línea. */

/* La función putendl_fd es una función que agrega
un salto de línea ('\n') a la función putstr_fd. */

/* int main(void)
{
   char    *c;
   int     fd;
   c = "maricarmen";
   fd = 0;
   ft_putendl_fd(c, fd);
} */
