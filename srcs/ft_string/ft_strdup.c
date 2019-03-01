/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:14:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:44:18 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(*result) * (len + 1));
	NULL_CHECK(result);
	*((char *)ft_memcpy_at(result, s1, len)) = '\0';
	return (result);
}
