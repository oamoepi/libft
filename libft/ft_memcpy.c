/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:17:53 by amoepi            #+#    #+#             */
/*   Updated: 2019/05/30 11:50:51 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *restrict dst,
		const void *restrict src, size_t n)
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
