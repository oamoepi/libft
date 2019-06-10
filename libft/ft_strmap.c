/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:25:05 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:15:38 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	if (!(new = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		new[i++] = (*f)(*s);
		s++;
	}
	new[i] = '\0';
	return (new);
}
