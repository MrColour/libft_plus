/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:05:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 18:37:26 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree *probe;

	if (!root || !(*root))
	{
		if (root)
			(*root) = btree_newnode(item);
		return ;
	}
	probe = (*root);
	if ((*cmpf)(item, probe->item) < 0)
	{
		if (probe->left)
			btree_insert(&(probe->left), item, cmpf);
		else
			probe->left = btree_newnode(item);
	}
	else
	{
		if (probe->right)
			btree_insert(&(probe->right), item, cmpf);
		else
			probe->right = btree_newnode(item);
	}
}
