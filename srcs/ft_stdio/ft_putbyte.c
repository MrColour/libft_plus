/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbyte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:47:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:28:08 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putbyte(int c)
{
	if (!ft_isprint(c))
	{
		write(1, "\\", 1);
		if (c <= '\xf')
			write(1, "0", 1);
		ft_putnbr_base((unsigned char)c, "0123456789abcdef");
	}
	else
		write(1, &c, 1);
}
