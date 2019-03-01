/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:21:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:34:25 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = malloc(sizeof(char) * (size));
	NULL_CHECK(result);
	ft_bzero(result, size);
	return (result);
}
