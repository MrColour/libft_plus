/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:20:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/28 10:00:13 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef unsigned char		t_bool;

typedef unsigned char		t_uint8;
typedef unsigned short		t_uint16;
typedef unsigned long		t_uint32;
typedef unsigned long long	t_uint64;

typedef signed char			t_int8;
typedef signed short		t_int16;
typedef signed long			t_int32;
typedef signed long long	t_int64;

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memalloc(size_t size);
char				*ft_realloc(char *buffer, int init_size);

size_t				ft_strnlen(const char *s, size_t maxlen);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

size_t				ft_intlen(long n);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_atoi_base(char *str, char *base);
char				*ft_itoa_base(long nbr, char *base);
char				*ft_convert_base(char *nbr, char *base_from, char *base_to);

int					ft_wcount(const char *s, const char *charset);


#endif
