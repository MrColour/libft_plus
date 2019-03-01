/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 07:11:34 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:40:19 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** Note: ft_memcpy copies in a backward way while ft_memcpy_foward
** copies in a foward fashion.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		ft_memcpy_foward(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
