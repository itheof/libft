/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoitab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:16:14 by tvallee           #+#    #+#             */
/*   Updated: 2015/01/14 09:30:16 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	**ft_strlsttoitab(t_list *lst, int destroy)
{
	int		**tab;
	int		len;
	int		i;
	t_list	bu;

	i = 0;
	len = ft_lstlen(lst);
	tab = malloc(sizeof(*tab) * (len + 1));
	while (lst != NULL)
	{
		tab[i] = ft_atabtoistr(lst->content);
		bu = *lst;
		if (destroy)
		{
			if (destroy == 2)
				ft_freetab(lst->content);
			free(lst);
		}
		lst = bu.next;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
