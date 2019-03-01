/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:23:46 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:44:20 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	char	*head;

	NULL_CHECK(s);
	NULL_CHECK(f);
	result = malloc(sizeof(*result) * (ft_strlen(s) + 1));
	NULL_CHECK(result);
	head = result;
	while (*s)
	{
		*result = f((result - head), *s++);
		result++;
	}
	*result = '\0';
	return (head);
}
