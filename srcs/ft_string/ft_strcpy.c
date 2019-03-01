/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:23:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:40:52 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int i;

	i = 0;
	while (*src)
		dst[i++] = *src++;
	dst[i] = *src;
	return (dst);
}

/*
** Under consideration:
** char	*ft_strcpy(char *dst, const char *src)
**{
**	return (ft_strncpy(dst, src, ft_strlen(src) + 1));
**}
*/
