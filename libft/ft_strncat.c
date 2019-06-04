/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:53:46 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/03 10:17:40 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char 	*i;

	i = s1;
	while (*i != '\0')
	{
		i++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*i = *s2;
		i++;
		s2++;
		n--;
	}
	* = '\0';
	return (s1);
}
