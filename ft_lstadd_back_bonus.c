/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:37:14 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:01:53 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!new)
	{
		return ;
	}
	if (!*lst)
		*lst = new;
	else
	{
		if (last == NULL)
			return ;
		last->next = new;
	}
}

/* agregar un nuevo elemento al final de la lista. */

/* La función lstadd_back agrega nuevo al final de la última parte de la lista.

Puede usar lstlast para acceder al último elemento, o puede acceder a él a través de un bucle.
Si la parte principal es nula, ¡se requiere el manejo de excepciones! */

/* DESCRIPCIÓN:
Agrega el elemento 'nuevo' al final de la lista. */

/* Descripción Añade el nodo ’new’ al final de la lista ’lst’. */
