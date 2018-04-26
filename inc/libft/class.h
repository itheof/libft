/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 11:43:59 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/26 19:18:31 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

# include "libft/libc.h"
# include "libft/stdbool.h"

// x is a union type
# define CLASS_INIT(inst, cls, ...) class_preload(&inst, &cls) ; inst.class_init(&inst, ##__VA_ARGS__)
# define CLASS_CALL(inst, fun, ...) inst.fun(&inst, ##__VA_ARGS__)
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

/*
** Examples
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

void	class_preload(void *dst, void const *src);

#endif
