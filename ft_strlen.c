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

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	adder;

	adder = 0;
	while (s[adder] != '\0')
	{
		adder++;
	}
	return (adder);

}

/* int	main(void)
{
	const char	s[6] = "hello";

	printf("%zu\n", ft_strlen(s));
	return (0);
} */
