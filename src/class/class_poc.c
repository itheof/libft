/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_poc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 12:01:26 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/26 19:42:50 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/class.h"
#include "libft/print.h"

static void	init(struct s_class_poc *self)
{
	ft_putendl("init() started");
	(void)self;
	ft_putendl("init() ended");
}

static void	shutdown(struct s_class_poc *self)
{
	ft_putendl("shutdown() started");
	(void)self;
	ft_putendl("shutdown() ended");
}

static void greet(struct s_class_poc *self)
{
	ft_putendl(self->msg);
}

extern t_class_object const	class_object;

t_class_poc const	class_poc = {
	.class = {
		.size = sizeof(class_poc),
		.is_instance = false,
		.super = &class_object
	},
	.class_init = init,
	.class_shutdown = shutdown,
	.greet = greet,
	.msg = "Hello from class_poc !",
};


static void	init_son(t_class_poc_son *self)
{
	t_class_poc	*super;

	super = (t_class_poc *)((char*)(self) + sizeof(self->class));
	ft_putendl("init_son() started");
	super->class_init(super);
	ft_putendl("init_son() ended");
}

static void	shutdown_son(t_class_poc_son *self)
{
	t_class_poc	*super;

	super = (t_class_poc *)((char*)(self) + sizeof(self->class));
	ft_putendl("shutdown_son() started");
	super->class_shutdown(super);
	ft_putendl("shutdown_son() ended");
}

static void greet_son(t_class_poc_son *self)
{
	ft_putstr("Hey ! My number is: ");
	ft_putnbr(self->number);
	ft_putendl(" :)");
}

extern t_class_object const	class_object;

t_class_poc_son const	class_poc_son = {
	.class = {
		.size = sizeof(class_poc_son),
		.is_instance = false,
		.super = &class_poc
	},
	.class_init = init_son,
	.class_shutdown = shutdown_son,
	.greet = greet_son,
};
