/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:51:18 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/06 23:40:43 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static char		*ft_strmalloc(char *s, size_t i, size_t j)
{
	char	*r;
	size_t	k;

	k = i + j;
	r = malloc(sizeof(char) * (j + 1));
	while (s[i] && i <= k)
	{
		r[i] = s[i];
		i++;
	}
	return (r);
}

static size_t	ft_countstr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		while (s[i] && s[i] !=c )
			i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	t_delim	str;
	char	**r;
	size_t	nb;
	int		k;

	if (!s)
		return (NULL);
	nb = ft_countstr(s, c);
	r = malloc(sizeof(char) * (nb + 1));
	str.i = 0;
	k = 0;
	while (str.i < ft_strlen(s))
	{
		while (s[str.i] && s[str.i] == c)
			str.i++;
		str.j = 0;
		while (s[str.i + str.j] && s[str.i +str.j] != c)
			str.j++;
		r[k++] = ft_strmalloc((char *)s, str.i, str.j);
		str.i += str.j;
	}
	r[k] = NULL;
	return (r);
}
