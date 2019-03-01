/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:29:01 by kmira             #+#    #+#             */
/*   Updated: 2019/02/27 22:53:15 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

#include "ft_ctype.h"
#include "ft_math.h"
#include "ft_macro.h"

void	ft_swap_int(int *a, int *b);
void	ft_swap_char(char *a, char *b);
void	ft_swap_str(char **a, char **b);
void	ft_swap_item(void **a, void **b);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
size_t	ft_intlen(long n);
size_t	ft_strlen(const char *);

