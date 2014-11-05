/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:53:11 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/05 18:45:46 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	if (dst > src)
	{
		while (i >= 0)
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i--);
		return (dst);
	}
	else
		return(ft_memcpy(dst, src, len));
}
