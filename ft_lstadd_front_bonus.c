/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:43 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:07:27 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

/* añadir un nuevo elemento al principio de la lista. */

/* lstadd_front es una función que agrega novedades al encabezado de la lista.

Después de la verificación nula, dado que es la parte principal, acceda a ella con
*lst y conéctese. */

/* int	main(void)
{
	return (0);
} */

/* Parámetros  : lst: la dirección de un puntero al primer nodo de
una lista.
new: un puntero al nodo que añadir al principio de
la lista. */

/* Descripción : Añade el nodo ’new’ al principio de la lista ’lst’. */

/* añadir un nuevo elemento al principio de la lista */
