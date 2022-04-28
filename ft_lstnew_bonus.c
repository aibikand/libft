/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibikand <aibikand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 08:03:17 by aibikand          #+#    #+#             */
/*   Updated: 2022/04/28 10:16:37 by aibikand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

/* crear nueva lista. */

/* La función lstnew es una función que asigna dinámicamente una lista,
inserta contenido y señala junto a nulo.

Necesitas estudiar el concepto de una lista enlazada individualmente. */

/* int		main(void)
{
t_list	*project;
	char	str[];
	t_list	*elem;

char	str[] = "María tiene dolor de cabeza";
project = ft_lstnew((void *)str);
printf("\n%s\n", project->content);
} */
/* int	main(void)
{
	return (0);
}*/
/* DESCRIPCIÓN:
Asigna (con malloc(3)) y devuelve un nuevo elemento.
La variable 'content' se inicializa con el valor del parámetro 'content'.
La variable 'next' se inicializa en NULL. */
/* crear nueva lista.
En lenguaje C, el operador -> se utiliza después de una variable de tipo puntero
que apunta a una estructura de datos, para indicar a qué campo de la estructura
queremos acceder. se indica que accedemos a su campo dato */
/* Una estructura de datos, es una variable que puede contener
otras variables */
/* int	main(void)
{
	str[] = "lorem ipsum dolor sit";
	elem = ft_lstnew((void *)str);
	printf("%s\n", elem->content);
}
 */
