/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:23:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:41:11 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** A general iteration function can be made
** with prototype of void *, size, (*f), 'type' (content size if more general)
*/

void	ft_striter(char *s, void (*f)(char *))
{
	NULL_CHECK_VOID(s);
	NULL_CHECK_VOID(*f);
	while (*s)
		(*f)(s++);
}
