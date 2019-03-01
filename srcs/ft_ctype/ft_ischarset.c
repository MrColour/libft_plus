/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:17:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/26 19:01:32 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_ischarset(int c, const char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_ischarset_size(int c, const char *charset, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (c == *charset)
			return (1);
	}
	return (0);
}
