/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:29:39 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/27 12:06:58 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

# include <string.h>
# include <strings.h>
# include <stdio.h>

int				ft_isalpha(int val);
int				ft_isdigit(int val);
int				ft_isalnum(int val);
int				ft_isascii(int val);
int				ft_isprint(int val);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, unsigned int len);
void			ft_bzero(void *b, unsigned int len);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
void			*ft_memmove(void *dst, const void *src, unsigned int len);
size_t			ft_strlcpy(char *dst, const char *src, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t len);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
char			*ft_strnstr(const char *d, const char *s, unsigned int n);
int				ft_atoi(const char *str);
void			*ft_calloc(unsigned int count, unsigned int size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

#endif
