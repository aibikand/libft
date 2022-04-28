/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 08:35:48 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:09:17 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (!*lst)
	{
		return ;
	}
	if (del && lst)
	{
		while (*lst)
		{
			new = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = new;
		}
	}
	lst = NULL;
}

/* eliminar la secuencia de elementos de la lista desde un punto de partida. */

/* La función lstcleat accede a la lista recibida como valor de argumento
y elimina y libera todo el contenido de la lista.

Preste atención a la precedencia del operador
Se requiere la inicialización del puntero colgante */

/* Parámetros lst:         la dirección de un puntero a un nodo.
del:                       un puntero a función utilizado para eliminar
                           el contenido de un nodo.
Valor devuelto:            Nada
Funciones autorizadas:     free
Descripción:               Elimina y libera el nodo ’lst’ dado y todos los
                           consecutivos de ese nodo, utilizando
						   la función ’del’ y free(3).
Al final, el puntero a la lista debe ser NULL. */

/*SINOPSIS:                borrar secuencia de elementos de lista desde un punto de partida
DESCRIPCIÓN:               Elimina y libera el elemento dado y cada sucesor de ese elemento,
                           usando la función 'del' y free(3). Finalmente,
						   el apuntador a la lista debe establecerse en NULL.
*/
