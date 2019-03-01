/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:39:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:40:04 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t index;

	index = 0;
	while (1)
	{
		if (index == n)
			return (NULL);
		if (((const unsigned char *)s)[0] == (unsigned char)c)
			return ((char *)s);
		if (index + 1 == n)
			return (NULL);
		if (((const unsigned char *)s)[1] == (unsigned char)c)
			return ((char *)(s + 1));
		if (index + 2 == n)
			return (NULL);
		if (((const unsigned char *)s)[2] == (unsigned char)c)
			return ((char *)(s + 2));
		if (index + 3 == n)
			return (NULL);
		if (((const unsigned char *)s)[3] == (unsigned char)c)
			return ((char *)(s + 3));
		s += 4;
		index = index + 4;
	}
}
