/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:32:39 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 17:54:27 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*new;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	i++;
	new = (char *)malloc(sizeof(char) * i);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' || new[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	return (new);
}
