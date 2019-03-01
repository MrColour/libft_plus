/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:02:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:40:22 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** Note to future self:
** Needs to be changed to be self dependent.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	return (ft_strncat(s1, s2, ft_strlen(s2) + 1));
}
