/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:36:30 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/09 13:54:50 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s_new;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	s_new = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_new)
		return (NULL);
	while (start > ft_strlen(s))
	{
		*s_new = '\0';
		return (s_new);
	}
	while (len > 0)
	{
		s_new[i] = s[start];
		i++;
		start++;
		len--;
	}
	s_new[i] = '\0';
	return (s_new);
}
/*
int	main(void)
{
	char	*s = "hola buenas tardes";

	printf("%s\n", ft_substr(s, 5, 8));
} */
