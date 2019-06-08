/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:38:55 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/07 17:49:00 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *fresh;

	if (fresh = (void *)malloc(size * sizeof(void)))
	{
		ft_bzero(fresh, size);
		return (fresh);
	}
	return (NULL);
}
