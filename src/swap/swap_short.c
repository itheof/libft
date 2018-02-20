/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:55:43 by tvallee           #+#    #+#             */
/*   Updated: 2018/02/13 12:57:25 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/swap.h"

unsigned short		swap_short(unsigned short n)
{
	return (((0xFF00 & n) >> 8) | (( 0x00FF & n) << 8));
}