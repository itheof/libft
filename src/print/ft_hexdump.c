/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 17:10:38 by tvallee           #+#    #+#             */
/*   Updated: 2018/02/08 17:28:45 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/print.h"
#include "libft/stdbool.h"

void	ft_hexdump(const char *addr, size_t nbytes)
{
	const char	*map = "0123456789abcdef";
	size_t		i;

	i = 0;
	while (true)
	{
		ft_putchar_fd(map[(*addr & 0xF0) >> 4], 2);
		ft_putchar_fd(map[*addr & 0xF], 2);
		nbytes--;
		addr++;
		i++;
		if (nbytes > 0)
		{
			if (i == 16)
			{
				i = 0;
				ft_putchar_fd('\n', 2);
			}
			else if (!(i & 0x1))
				ft_putchar_fd(' ', 2);
		}
		else
			break ;
	}
	ft_putchar_fd('\n', 2);
}
