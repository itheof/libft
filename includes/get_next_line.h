/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:14:33 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/14 19:05:19 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# define BUFF_SIZE 8

typedef struct	s_buff
{
	char			*buff;
	int				offst;
	int				fd;
	int				readret;
	struct s_buff	*next;
}				t_buff;

int				get_next_line(int const fd, char **line);

#endif
