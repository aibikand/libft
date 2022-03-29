/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:54:38 by aibikand          #+#    #+#             */
/*   Updated: 2022/03/29 11:49:20 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	test;

	test = 'A';
	printf("%d\n", ft_isalnum(test));
	return (0);
} */

	int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
