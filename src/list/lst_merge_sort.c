/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_quick_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvallee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:00:52 by tvallee           #+#    #+#             */
/*   Updated: 2015/11/30 23:55:42 by tvallee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_merge_sort(t_list *lst, int (*cmp)(void *, void *))
{
    t_list *p, *q, *e, *tail;
    int insize, nmerges, psize, qsize, i;

	if (!lst)
		return NULL;
	insize = 1;
	while (1)
	{
		p = lst;
		lst = NULL;
		tail = NULL;
		nmerges = 0;
		while (p)
		{
			nmerges++;
			q = p;
			psize = 0;
			for (i = 0; i < insize; i++) {
				psize++;
				if (!(q = q->next))
					break;
			}
			qsize = insize;
            while (psize > 0 || (qsize > 0 && q)) {

                /* decide whether next element of merge comes from p or q */
                if (psize == 0) {
				/* p is empty; e must come from q. */
					e = q; q = q->next; qsize--;
				}
				else if (qsize == 0 || !q) {
				    /* q is empty; e must come from p. */
					e = p; p = p->next; psize--;
				}
				else if (cmp(p->content, q->content) <= 0) {
				    /* First element of p is lower (or same);
				     * e must come from p. */
				    e = p; p = p->next; psize--;
				}
				else {
			    /* First element of q is lower; e must come from q. */
				    e = q; q = q->next; qsize--;
				}

                /* add the next element to the merged list */
				if (tail) {
				    tail->next = e;
				} else {
					lst = e;
				}
				tail = e;
			}

            /* now p has stepped `insize' places along, and q has too */
            p = q;
        }
		tail->next = NULL;
        if (nmerges <= 1)
            return lst;
        insize *= 2;
    }
}
