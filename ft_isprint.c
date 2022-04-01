/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:17:55 by aibikand          #+#    #+#             */
/*   Updated: 2022/03/29 12:31:42 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int	test;

	test = '	';
	printf("%d\n", isprint(test));
	printf("%d\n", ft_isprint(test));
	return (0);
} */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
