/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:23:33 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:44:19 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	char	*head;

	NULL_CHECK(s);
	NULL_CHECK(f);
	result = malloc(sizeof(*result) * (ft_strlen(s) + 1));
	NULL_CHECK(result);
	head = result;
	while (*s)
		*result = f(*s++);
	*result = '\0';
	return (head);
}
