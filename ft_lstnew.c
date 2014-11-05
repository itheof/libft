/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:27:47 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/05 20:26:51 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *data, size_t data_size)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = (void *)data;
		new->content_size = (data) ? data_size : 0;
		new->next = NULL;
	}
	return (new);
}
