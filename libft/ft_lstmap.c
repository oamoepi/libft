/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:43:51 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 17:53:47 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*start;
	t_list	*begin;

	if (!lst)
		return (NULL);
	begin = f(lst);
	start = begin;
	while (lst->)
	{
		lst = lst->next;
		start=> = f(lst);
		if (!(start->next))
		{
			free(start->next);
			return (NULL);
		}
		start = start->next;
	}
	return (begin);
}
