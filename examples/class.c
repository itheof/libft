/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:11:16 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/27 15:38:36 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/class.h"
#include "libft/print.h"

/*
** Poc class
*/

struct s_class_poc;
typedef struct	s_class_poc	t_class_poc;
struct	s_class_poc
{
	t_cls_info		class;
	t_class_object	super;
	void			(*class_init)(t_class_poc *self);
	void			(*class_shutdown)(t_class_poc *self);

	void			(*greet)(t_class_poc *self);
	const char		*msg;
};

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

/*
** Poc Son class
*/

struct s_class_poc_son;
typedef struct	s_class_poc_son	t_class_poc_son;
struct	s_class_poc_son
{
	t_cls_info		class;
	t_class_poc		super;
	void			(*class_init)(t_class_poc_son *self);
	void			(*class_shutdown)(t_class_poc_son *self);

	void			(*greet)(t_class_poc_son *self);
	int				number;
};


static void	init_son(t_class_poc_son *self)
{

	ft_putendl("init_son() started");
	CLASS_CALL(CLASS_SUPER(t_class_poc), class_init);
	ft_putendl("init_son() ended");
}

static void	shutdown_son(t_class_poc_son *self)
{
	t_class_poc	*super;

	super = (t_class_poc *)(class_super(self));
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

/*
** Main
*/

int main()
{
	t_class_poc		inst;
	t_class_poc_son	inst2;

	CLASS_INIT(inst, class_poc);
	CLASS_CALL(inst, greet);
	CLASS_SHUT(inst);
	CLASS_INIT(inst2, class_poc_son);
	CLASS_CALL(inst2, greet);
	CLASS_SHUT(inst2);
}
