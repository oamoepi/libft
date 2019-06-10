/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:32:57 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/10 16:41:25 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		b;
	int		c;
	char	*cpy;

	if (s)
	{
		i = 0;
		b = ft_strlen((char *)(s)) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (!(cpy = (char *)malloc(sizeof(*cpy) * (b - i + 1))))
			return (NULL);
		while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
			b--;
		c = 0;
		while (i <= b)
		{
			cpy[c++] = s[i];
			i++;
		}
		cpy[c] = '\0';
		return (cpy);
	}
	return (NULL);
}
