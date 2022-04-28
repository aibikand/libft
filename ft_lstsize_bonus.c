/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:02:34 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:17:38 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* La función lstsize devuelve el tamaño de la lista. En otras palabras,
cuenta cuántos elementos están conectados a la lista.

Dado que el valor devuelto es de tipo int, se puede devolver
fácilmente con una instrucción while. */

/* DESCRIPCIÓN:
Cuenta el número de elementos en una lista. */
