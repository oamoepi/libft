/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:36:32 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 14:03:29 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *to;
	unsigned char *from;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (len <= 0)
		return (dst);
	if (from < to)
	{
		while (len)
		{
			to[len - 1] = from[len - 1];
			len--;
		}
		return (to);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (to);
	}
}
