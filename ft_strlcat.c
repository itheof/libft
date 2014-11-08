/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:54:34 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/08 17:01:46 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		l;
	size_t		n;

	d = dst;
	s = src;
	n = size;
	while (size-- && *d)
		d++;
	l = d - dst;
	n = n - l;
	if (!size)
		return (l + ft_strlen(src));
	while (*s)
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	ft_putnbr(l + (s - src));
	ft_putchar(10);
	return (l + (s - src));
}
