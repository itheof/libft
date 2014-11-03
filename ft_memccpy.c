/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:33:39 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/03 12:55:00 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if ((unsigned char)c = src[i])
			return (dst + (i + 1) * sizeof(unsigned char));
		i++;
	}
	return (NULL);
}
