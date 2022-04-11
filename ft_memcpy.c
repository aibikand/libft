/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:13:16 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/11 18:51:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char src[] = "buenas";
	char dst[] = "hola";
	size_t val;

	size_t dstsize = 6;
	val = ft_strlcat(dst, src, dstsize);
	printf("%s\n", dst);
	printf("%zu", val);
	return (0);
} */
