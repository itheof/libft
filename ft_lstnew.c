/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:27:47 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/07 11:49:14 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *data, size_t data_size)
{
	t_list	*new;

	if (!data)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = (void *)data;
		new->content_size = data_size;
		new->next = NULL;
	}
	return (new);
}
