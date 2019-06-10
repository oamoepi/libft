/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:16:16 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:29:13 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	int		outcome;

	len = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	len = (len <= len2) ? len + 1 : len2 + 1;
	len = (len <= n) ? len : n;
	outcome = ft_memcmp(s1, s2, len);
	return (outcome);
}
