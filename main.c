/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:11:16 by tvallee           #+#    #+#             */
/*   Updated: 2018/04/26 19:17:11 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/class.h"

struct s_class_poc_son;
typedef struct s_class_poc_son t_class_poc_son;
/*struct s_class_poc_son
{
};
*/

extern t_class_poc		class_poc;
extern t_class_poc_son	class_poc_son;

int main()
{
	t_class_poc	inst;
	t_class_poc_son	inst2;

	CLASS_INIT(inst, class_poc);
	CLASS_CALL(inst, greet);
	CLASS_SHUT(inst);
	CLASS_INIT(inst2, class_poc_son);
	CLASS_CALL(inst2, greet);
	CLASS_SHUT(inst2);
}
