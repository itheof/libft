/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:00:31 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/03 17:12:05 by tvallee          ###   ########.fr       */
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

int»»···ft_isalpha(int c);
int»»···ft_isdigit(int c);

#endif
