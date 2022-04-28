/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 09:35:43 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:12:40 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		return ;
	}
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* aplicar la función al contenido de todos los elementos de la lista. */

/* La función lsttiter atraviesa el lst y aplica la función f()
a todos los elementos de contenido.

Se accede a los elementos atravesando repetidamente en el mismo contexto.
Igual que la función de tamaño */

/* Parámetros lst:      un puntero al primer nodo.
f:                      un puntero a la función que utilizará cada nodo.
Valor devuelto:         Nada
Funciones autorizadas:  Ninguna
Descripción:            Itera la lista ’lst’ y aplica la función ’f’ en el
                        contenido de cada nodo. */
/* SINOPSIS:            aplica la función al contenido de todos los elementos de la lista
DESCRIPCIÓN:            Itera la lista 'lst' y aplica la función 'f' al contenido de
                        cada elemento. */
