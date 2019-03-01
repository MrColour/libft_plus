/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:47:58 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:40:24 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_found(const char *s, int c)
{
	while (*s)
		if (*s++ == (unsigned char)c)
			return (1);
	if (*s == (unsigned char)c)
		return (1);
	return (0);
}

int			ft_strchrs(char *str, char *substr)
{
	while (*substr)
		if (!ft_found(str, *substr++))
			return (0);
	return (1);
}
