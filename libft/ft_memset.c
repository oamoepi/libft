/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:06:15 by amoepi            #+#    #+#             */
/*   Updated: 2019/05/30 11:33:17 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *i;

	if (n == 0)
		return (b);
	i = (unsigned char *)b;
	while (n--)
	{
		*i = (unsigned char)c;
		if (n)
			i++;
	}
	return (b);
}
