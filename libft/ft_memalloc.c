/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:38:55 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 15:18:21 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fresh;

	fresh = malloc(size);
	if (fresh && size)
	{
		ft_bzero((void *)fresh, size);
		return (fresh);
	}
	return (NULL);
}
