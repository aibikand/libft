/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:37:32 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:13:55 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	if (!(lst))
	{
		return (NULL);
	}
	end = lst;
	while (end->next != NULL)
	{
		end = end->next;
	}
	return (end);
}

/* encontrar el último elemento de la lista. */

/* DESCRIPCIÓN:
Devuelve el último elemento de la lista. */
