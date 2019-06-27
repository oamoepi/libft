/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:17:53 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/27 22:15:16 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst,
		const void *src, size_t n)
{
	char *a;
	char *b;

	if (n == 0 || dst == src)
		return (dst);
	a = (char *)dst;
	b = (char *)src;
	while (--n)
		*a++ = *b++;
	*a = *b;
	return (dst);
}
