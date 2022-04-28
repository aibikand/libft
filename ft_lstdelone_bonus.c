/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 07:41:14 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:11:05 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
	{
		return ;
	}
	(*del)(lst->content);
	free(lst);
}

/* Eliminar elemento de la lista. */

/* La función lstdelone es una función que elimina uno de la lista enlazada,
es decir, lst (lista), del (eliminar) uno (uno).

El elemento recibido como valor del primer argumento se libera como
puntero de función del segundo argumento, y también se libera la memoria misma.
No se debe liberar un puntero al siguiente.
 */
/* Parámetros lst:       el nodo a liberar.
del:                     un puntero a la función utilizada para liberar
                         el contenido del nodo. */
/* Valor devuelto:       Nada
Funciones autorizadas:   free
Descripción:             Toma como parámetro un nodo ’lst’
y libera la memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. La
memoria de ’next’ no debe liberarse. */
