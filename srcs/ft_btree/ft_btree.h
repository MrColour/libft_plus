/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 15:07:32 by kmira             #+#    #+#             */
/*   Updated: 2019/02/27 22:16:37 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include "ft_stdlib.h"

typedef struct		s_btree_node
{
	void				*item;
	struct s_btree_node	*left;
	struct s_btree_node	*right;
}					t_btree;

void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void				*btree_getitem(t_btree *root, void *item_ref,
					int (*cmpf)(void *, void *));
void				btree_insert(t_btree **root, void *item,
					int (*cmpf)(void *, void *));
int					btree_level_count(t_btree *root);
t_btree				*btree_newnode(void *item);

#endif
