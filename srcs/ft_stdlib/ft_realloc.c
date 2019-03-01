/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:28:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:34:46 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

#define BUF_MULTIPLIER 4

char	*ft_realloc(char *buffer, int init_size)
{
	char	*new_buffer;

	if (!(new_buffer = malloc(init_size * BUF_MULTIPLIER)))
		return (NULL);
	ft_strncpy(new_buffer, buffer, init_size - 1);
	free(buffer);
	return (new_buffer);
}
