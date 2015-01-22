/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablinedel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 14:56:05 by tvallee           #+#    #+#             */
/*   Updated: 2015/01/22 15:36:08 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_tablinedel(void **tab, void *line)
{
	int		i;
	void	**newtab;

	i = 0;
	while (tab[i])
		i++;
	newtab = ft_memalloc(sizeof(*newtab) * (i + 1));
	i = 0;
	while (tab[i] != line)
	{
		newtab[i] = tab[i];
		i++;
	}
	while (tab[i + 1])
	{
		newtab[i] = tab[i + 1];
		i++;
	}
	newtab[i] = NULL;
	return (newtab);
}
