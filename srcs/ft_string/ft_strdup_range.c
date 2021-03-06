/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:09:44 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:44:16 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup_range(const char *str, int index, int end)
{
	int		i;
	char	*dst;

	if (!(dst = (char *)malloc(end - index + 1)))
		return (NULL);
	i = 0;
	while (index < end)
		dst[i++] = str[index++];
	dst[i] = '\0';
	return (dst);
}
