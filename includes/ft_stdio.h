/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:58:59 by kmira             #+#    #+#             */
/*   Updated: 2019/02/27 22:32:43 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

#include <unistd.h>

#include "ft_ctype.h"
#include "ft_string.h"
#include "ft_stdlib.h"

void	ft_putbyte_fd(int c, int fd);
void	ft_putbyte(int c);
void	ft_putbytes_fd(const char *byte_str, int fd);
void	ft_putbytes(const char *byte_str);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_base_fd(int nbr, char *base, int fd);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putstrtab_fd(char **tab, char sep, int fd);
void	ft_putstrtab(char **tab, char sep);

#endif
