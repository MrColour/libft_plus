/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:22:31 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:28:12 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putbytes(const char *byte_str)
{
	while (*byte_str)
	{
		if (!ft_isprint(*byte_str))
		{
			ft_putchar('\\');
			if (*byte_str <= '\xf')
				ft_putchar('0');
			ft_putnbr_base(*byte_str++, "0123456789abcdef");
		}
		else
			ft_putchar(*byte_str++);
	}
}
