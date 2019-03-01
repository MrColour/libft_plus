/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:28:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:27:32 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_putstrtab(char **tab, char sep)
{
	if (tab)
		while (*tab)
		{
			ft_putstr(*tab);
			ft_putchar(sep);
			tab++;
		}
}
