/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 20:04:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 23:03:25 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	j = 0;
	while (str[j])
		++j;
	i = -1;
	while (--j > ++i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return (str);
}
