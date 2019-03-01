/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:25:28 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/27 22:36:12 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int static	ft_swap_type1(void *a, void *b, char *type)
{
	void	*temp;

	if (ft_strcmp(type, "char") == 0)
	{
		*(char *)temp = *(char *)a;
		*(char *)a = *(char *)b;
		*(char *)b = *(char *)temp;
		return (1);
	}
	if (ft_strcmp(type, "int") == 0)
	{
		*(int *)temp = *(int *)a;
		*(int *)a = *(int *)b;
		*(int *)b = *(int *)temp;
		return (1);
	}
	return (0);
}

int static	ft_swap_type2(void *a, void *b, char *type)
{
	void	*temp;

	if (ft_strcmp(type, "char *") == 0)
	{
		*(char *)temp = *(char *)a;
		*(char *)a = *(char *)b;
		*(char *)b = *(char *)temp;
		return (1);
	}
	if (ft_strcmp(type, "int *") == 0)
	{
		*(int *)temp = *(int *)a;
		*(int *)a = *(int *)b;
		*(int *)b = *(int *)temp;
		return (1);
	}
	return (0);
}

void		ft_swap_type(void *a, void *b, char *type)
{
	if (ft_swap_type1(a, b, type))
		return ;
	if (ft_swap_type2(a, b, type))
		return ;
}
