/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:00:31 by tvallee           #+#    #+#             */
/*   Updated: 2018/02/13 12:53:27 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdint.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <time.h>

# include "libft/getopt.h"
# include "libft/get_next_line.h"
# include "libft/log.h"
# include "libft/libc.h"
# include "libft/list.h"
# include "libft/print.h"
# include "libft/string.h"
# include "libft/stdbool.h"
# include "libft/array.h"
# include "libft/buffer.h"
# include "libft/swap.h"

/*
** The following are misc functions
*/

char				*ft_itoa(int n);
size_t				align_size(size_t size, size_t alignment);

/*
** The following is WIP:
*/

/*
** #include "tree.h"
*/

#endif
