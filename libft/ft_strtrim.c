/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:32:57 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/21 19:15:22 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s != '\0')
		s++;
	if (*s == '\0')
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return str;
	}

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
	{
		len--;
	}
	len++;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return NULL;
		while (i < len)
		{
			str[i] = s[i];
			i++;
		}
	str[i] = '\0';
	return str;
}
