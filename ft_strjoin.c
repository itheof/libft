/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:09:05 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/05 12:17:19 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int i;
	int j;

	r = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (r)
	{
		j = 0;
		i = 0;
		while (s1[i])
			r[i] = s1[i++];
		while (s2[j])
			r[i + j] = s2[j++];
		r[i + j] = 0;
	}
	return (r);
}
