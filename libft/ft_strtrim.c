/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:32:57 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/28 01:25:49 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*function(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char))))
		return (NULL);
	*str = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s != '\0')
		s++;
	if (*s == '\0')
	{
		str = function();
		return (str);
	}
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len++;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
