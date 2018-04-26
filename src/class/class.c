/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:16:50 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/26 19:05:50 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/class.h"
#include "libft/print.h"

static void init(t_class_object *self)
{
	(void)self;
}

static void	shutdown(t_class_object *self)
{
	(void)self;
}

t_class_object const	class_object = {
	.class = {
		.size = sizeof(class_object),
		.is_instance = false,
		.super = NULL,
	},
	.class_init = init,
	.class_shutdown = shutdown,
};

///////////

void	class_preload(void *dst, void const *src)
{
	t_class_model		*dst2;
	t_class_model const	*src2;
	
	// TODO: do not copy parent regions
	// TODO: iterative over recursion
	if (src != NULL)
	{
		dst2 = dst;
		src2 = src;
		ft_memcpy(dst2, src2, src2->class.size);
		class_preload((t_class_model*)((char *)dst2 + sizeof(dst2->class)),
				src2->class.super);
	}
}
