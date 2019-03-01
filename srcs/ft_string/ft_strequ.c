/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:24:38 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:41:08 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strequ(char const *s1, char const *s2)
{
	NULL_CHECK_INT(s1);
	NULL_CHECK_INT(s2);
	return (ft_strcmp(s1, s2) != 0);
}
