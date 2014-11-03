/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:13:40 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/03 17:17:50 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	else
		return (0);
}
