/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 11:43:59 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/27 15:46:26 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

# include "libft/libc.h"
# include "libft/stdbool.h"

# define CLASS_INIT(inst, cls, ...) class_preload(&inst, &cls) ; inst.class_init(&inst, ##__VA_ARGS__)
# define CLASS_CALL(inst, fun, ...) inst.fun(&inst, ##__VA_ARGS__)
# define CLASS_SUPER(super_cls) (*(super_cls*)((char*)self + sizeof(t_cls_info)))
# define CLASS_SHUT(inst) inst.class_shutdown(&inst)

struct s_cls_info;
typedef struct s_cls_info	t_cls_info;
struct s_class_object;
typedef struct s_class_object	t_class_object;

struct	s_cls_info
{
	size_t const	size;
	t_bool			is_instance;
	void const		*super;
};

struct	s_class_object
{
	t_cls_info			class;
	void				(*class_init)(t_class_object *self);
	void				(*class_shutdown)(t_class_object *self);
};

typedef struct	s_class_model
{
	t_cls_info		class;
	t_class_object	super;
	void			(*class_init)(t_class_object *self);
	void			(*class_shutdown)(t_class_object *self);

	char			class_specific[];
}				t_class_model;

void	class_preload(void *dst, void const *src);
void	*class_super(void *son);

extern t_class_object const	class_object;

#endif
