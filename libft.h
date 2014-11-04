/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:00:31 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/05 00:09:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void»···*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void»···*ft_memcpy(void *dst, void *src, size_t len);
void»···*ft_memccpy(void *dst, const void *src, int c, size_t n);
void»···*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int»»···ft_memcmp(const void *s1, const void *s2, size_t n);
size_t»·ft_strlen(const char *s);
char»···*ft_strdup(const char *s1);
char»···*ft_strcpy(char *dst, const char *src);
char»···*ft_strncpy(char *dst, char *src, size_t n);
char»···*ft_strcat(char *s1, const char *s2);
char»···*ft_strncat(char *s1, const char *s2, size_t n);

char»···*ft_strchr(const char *s, int c);
char»···*ft_strrchr(const char *s, int c);
char»···*ft_strstr(const char *s1, const char *s2);
char»···*ft_strnstr(const char *s1, const char *s2, size_t n);
int»»···ft_strcmp(const char *s1, const char *s2);
int»»···ft_strncmp(const char *s1, const char *s2, size_t n);
int»»···ft_atoi(const char *str);
int»»···ft_isalpha(int c);
int»»···ft_isdigit(int c);
int»»···ft_isalnum(int c);
int»»···ft_isascii(int c);
int		ft_isprint(int c);
int»»···ft_toupper(int c);
int»»···ft_tolower(int c);

void»···*ft_memalloc(size_t size);
void»···ft_memdel(void **ap);
char»···*strnew(size_t size);
void»···ft_strdel(char **as);
void»···ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));


#endif
