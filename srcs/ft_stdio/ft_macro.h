/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_macro.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 22:25:36 by kmira             #+#    #+#             */
/*   Updated: 2019/02/27 22:27:10 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define ERROR_CHECK(x) if (x) return (-1)
# define ZERO_CHECK(x) if (x) return (0)
# define NULL_CHECK(x) if (x == NULL) return (NULL)
# define NULL_CHECK_INT(x) if (x == NULL) return (0)
# define NULL_CHECK_CHAR(x) if (x == NULL) return ('\0')
# define NULL_CHECK_VOID(x) if (x == NULL) return
# define BREAK_CHECK(x) if (x) break
