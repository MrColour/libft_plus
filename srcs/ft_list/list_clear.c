/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:29:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/25 09:35:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_clear -- free all elements, and their items, of a list.
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         list_clear(t_list **head, void free_item(void *));
**
**    PARAMETERS
**
**         t_list **head              Pointer to a pointer to the
**                                    first element of a list.
**
**         void free_item(void *)     A pointer to a function that
**                                    frees an element's item.
**
**    DESCRIPTION
**         Iterates through a list free'ing of its elements along with
**         their items.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include <stdlib.h>
#include "libft.h"

int		list_clear(t_list **head, void (*free_item)(void *))
{
	t_list	*tmp;

	if (head && free_item)
	{
		while (*head)
		{
			tmp = (*head);
			(*head) = (*head)->successor;
			free_item(tmp->item);
			free(tmp);
		}
		(*head) = NULL;
		return (0);
	}
	return (-1);
}
