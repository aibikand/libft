/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 10:47:34 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:15:21 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;

	if (!lst && !*del && !*f)
	{
		return (NULL);
	}
	result = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}

/* aplicar la función al contenido de todos los elementos
de la lista en una nueva lista. */

/* La función lstmap es una función que devuelve una nueva lista aplicando
la función f() al valor de contenido de la lista lst como argumento.

Resuélvalo usando las funciones lst creadas hasta ahora. */

/* void (*f)(void *) = definimos una variable f de tipo puntero
                       a una función que no acepta argumentos ((void))
					   y también devuelve un valor void */

/* Parámetros lst: un puntero a un nodo.
f:                 la dirección de un puntero a una función usada
                   en la iteración de cada elemento de la lista.
del:               un puntero a función utilizado para eliminar
                   el contenido de un nodo, si es necesario.
Valor devuelto:    La nueva lista.
NULL               si falla la reserva de memoria.

Funciones autorizadas:  malloc, free

Descripción:       Itera la lista ’lst’ y aplica la función ’f’ al
                   contenido de cada nodo. Crea una lista resultante
                   de la aplicación correcta y sucesiva de la función
                   ’f’ sobre cada nodo. La función ’del’ se utiliza
                   para eliminar el contenido de un nodo, si hace
                   falta. */

/* SINOPSIS: aplica la función al contenido de todos los elementos de la lista en una nueva lista

DESCRIPCIÓN:
Itera la lista 'lst' y aplica la función 'f' al contenido de
cada elemento. Crea una nueva lista resultante de las sucesivas aplicaciones de
la función 'f'. La función 'del' se utiliza para borrar el contenido de un
elemento si es necesario. */
