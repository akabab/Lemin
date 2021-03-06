/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycribier <ycribier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 12:11:54 by ycribier          #+#    #+#             */
/*   Updated: 2014/02/19 16:19:17 by ycribier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLIST_H
# define DLIST_H

typedef struct		s_dlist_node
{
	struct s_dlist_node	*next;
	struct s_dlist_node	*prev;
	void				*value;
}					t_dlist_node;

typedef struct		s_dlist
{
	int				count;
	t_dlist_node	*first;
	t_dlist_node	*last;
}					t_dlist;

t_dlist		*dlist_create(void);
void		dlist_destroy(t_dlist *dlist);
void		dlist_clear(t_dlist *dlist);
void		dlist_clear_destroy(t_dlist *dlist);

# define dlist_count(A) ((A)->count)
# define dlist_first(A) ((A)->first != NULL ? (A)->first->value : NULL)
# define dlist_last(A) ((A)->last != NULL ? (A)->last->value : NULL)

void		dlist_push_back(t_dlist *dlist, void *value);
void		*dlist_pop_back(t_dlist *dlist);
void		dlist_push_front(t_dlist *dlist, void *value);
void		*dlist_pop_front(t_dlist *dlist);

void		*dlist_remove(t_dlist *dlist, t_dlist_node *node);

#endif /* !DLIST_H */
