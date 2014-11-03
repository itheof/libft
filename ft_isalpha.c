/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <tvallee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:00:10 by tvallee           #+#    #+#             */
/*   Updated: 2014/11/03 17:08:55 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if (((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
			|| ((unsigned char)c >= 'a' && (unsigned char)c <= 'z'))
		return (1);
	else
		return (0);
}
