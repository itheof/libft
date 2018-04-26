/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_poc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 12:01:26 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/26 14:51:06 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/class.h"
#include "libft/print.h"

static void	init(struct s_class_poc *self)
{
	(void)self;
	ft_putendl("init() got called");
}

static void	shutdown(struct s_class_poc *self)
{
	(void)self;
	ft_putendl("shutdown() got called");
}

static void greet(struct s_class_poc *self)
{
	ft_putendl(self->msg);
}

struct s_class_poc const	class_poc = {
	.init = init,
	.shutdown = shutdown,
	.class_size = sizeof(class_poc),
	.class = &class_poc,

	.greet = greet,
	.msg = "Hello from class_poc !",
};
