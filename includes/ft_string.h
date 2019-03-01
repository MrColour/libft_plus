/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 00:16:27 by kmira             #+#    #+#             */
/*   Updated: 2019/02/28 09:58:46 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>

# include "ft_stdlib.h"

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *dst, const void *src, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *dst, int c, size_t n);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strchrs(char *str, char *substr);
void	ft_strclr(char *s);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **as);
char	*ft_strdup_range(const char *str, int index, int end);
char	*ft_strdup(const char *str);
int		ft_strequ(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *dst, const char *src, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strnstr(const char *str, const char *find, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrev(char *str);
char	*ft_strstr(const char *str, const char *find);
char	*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
