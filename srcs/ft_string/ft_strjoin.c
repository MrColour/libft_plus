/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:17 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:41:14 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *result;

	NULL_CHECK(s1);
	NULL_CHECK(s2);
	result = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	NULL_CHECK(result);
	return (ft_strcat(ft_strcat(result, s1), s2));
}
