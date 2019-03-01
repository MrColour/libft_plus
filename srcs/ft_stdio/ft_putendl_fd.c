/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:28:38 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:28:16 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putendl_fd(char const *s, int fd)
{
	NULL_CHECK_VOID(s);
	write(fd, &s, ft_strlen(s));
	write(fd, "\n", 1);
}
