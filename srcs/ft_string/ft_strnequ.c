/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:24:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:41:43 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	NULL_CHECK_INT(s1);
	NULL_CHECK_INT(s2);
	if (n > 0)
		return (ft_strncmp(s1, s2, n) != 0);
	return (1);
}
