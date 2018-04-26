/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 11:43:59 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/26 14:52:07 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

# include "libft/libc.h"

// x is a union type
# define CLASS_INIT(inst, cls, ...) inst = cls ; inst.init(&inst, ##__VA_ARGS__)
# define CLASS_CALL(inst, fun, ...) inst.fun(&inst, ##__VA_ARGS__)
# define CLASS_SHUT(inst) inst.shutdown(&inst)

typedef struct	s_class
{
	struct s_class const	*class;
	void					(*init)(struct s_class *self);
	void					(*shutdown)(struct s_class *self);
	size_t					class_size;
}				t_class;

typedef struct	s_class_poc
{
	struct s_class_poc const	*class;
	void						(*init)(struct s_class_poc *self);
	void						(*shutdown)(struct s_class_poc *self);
	size_t						class_size;

	void						(*greet)(struct s_class_poc *self);
	const char					*msg;
}				t_class_poc;

#endif
