/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:32:57 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/28 03:38:31 by amoepi           ###   ########.fr       */
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

static char	*function2(char const *s, char *str, int i, int len)
{
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
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
	return (function2(s, str, i, len));
}
