/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:33:00 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/25 18:13:14 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;

	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
	if (!(new_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new_list = lst;
	return (new_list);
	free(new_list);
}
