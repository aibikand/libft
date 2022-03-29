/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:58:27 by aibikand          #+#    #+#             */
/*   Updated: 2022/03/28 16:58:32 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	adder;

	adder = 0;
	while (str[adder] != '\0')
	{
		adder++;
	}
	return (adder);
}
/*int	ft_strlen(char *str);

int	main(void)
{
	char	str[20];
	int		comprobar;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	comprobar = ft_strlen(str);
	ft_putchar(comprobar + '0');
	return (0);
}
*/
