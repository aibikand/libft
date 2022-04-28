/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:04:56 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 09:59:13 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}

/* cadena de salida al archivo dado. */

/* La función putstr_fd es una función que envía la cadena s
como una cadena de bytes al flujo abierto con el correspondiente fd
(valor del descriptor de archivo) */

/* int main(void)
{
   char    *c;
   int     fd;

   c = "Ramón";
   fd = 1;
   ft_putstr_fd(c, fd);
}
 */
