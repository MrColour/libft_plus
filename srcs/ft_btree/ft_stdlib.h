/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:29:01 by kmira             #+#    #+#             */
/*   Updated: 2019/02/27 22:16:39 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define ERROR_CHECK(x) if (x) return (-1)
# define ZERO_CHECK(x) if (x) return (0)
# define NULL_CHECK(x) if (x == NULL) return (NULL)
# define BREAK_CHECK(x) if (x) break

void				ft_swap_int(int *a, int *b);
void				ft_swap_char(char *a, char *b);
void				ft_swap_str(char **a, char **b);
void				ft_swap_item(void **a, void **b);
