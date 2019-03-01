/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:49:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:41:40 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (n > i && s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
** Under Consideration:
** int		ft_strncmp(char const *s1, char const *s2, size_t n)
**{
**	size_t len;
**
**	len = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
**	len = ft_min(len, n);
**	return (ft_memcmp(s1, s2, len));
**}
*/
