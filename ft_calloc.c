/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:30:00 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/08 09:05:49 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(sizeof(size) * count);
	if (!dest)
	{
		return (NULL);
	}
	ft_memset(dest, 0, size * count);
	return (dest);
}

/* int	main(void)
{
	int	*pData;

	int i, n;
	printf("El número de dígitos que se introducirán:");
	scanf("%d", &i);
	pData = (int *)calloc(i, sizeof(int));
	if (pData == NULL)
		exit(1);
	for (n = 0; n < i; n++)
	{
		printf("ingresa un número #% d:", n + 1);
		scanf("%d", &pData[n]);
	}
	printf("El número que ingresaste es:");
	for (n = 0; n < i; n++)
		printf("%d ", pData[n]);
	free(pData);
	system("pause");
	return (0);
}
 */
