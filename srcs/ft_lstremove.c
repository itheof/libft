/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 11:11:30 by tvallee           #+#    #+#             */
/*   Updated: 2015/01/14 16:36:05 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_lstremove(t_list *list, t_list *elem)
{
	t_list		*old;
	t_list		*current;

	if (list)
	{
		current = list;
		while (current && current != elem)
		{
			old = current;
			current = current->next;
		}
		if (current == elem)
		{
			old->next = current->next;
			free(current);
			return (1);
		}
	}
	return (0);
}
