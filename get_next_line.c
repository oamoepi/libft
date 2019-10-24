/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 13:41:08 by amoepi            #+#    #+#             */
/*   Updated: 2019/10/01 19:07:19 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		new_line(char **store_buff, char **line)
{
	char	*limit;

	if ((limit = ft_strchr(*store_buff, '\n')))
	{
		*line = ft_strsub(*store_buff, 0, limit - *store_buff);
		ft_strcpy(*store_buff, limit + 1);
		return (1);
	}
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	int			read_line;
	char		buff[BUFF_SIZE + 1];
	static char	*store_buff = NULL;

	if (store_buff && new_line(&store_buff, line))
		return (1);
	while ((read_line = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[read_line] = '\0';
		store_buff = combine(store_buff, buff);
		if (new_line(&store_buff, line))
			return (1);
	}
	if (read_line < 0)
		return (-1);
	if (store_buff && *store_buff)
	{
		*line = ft_strdup(store_buff);
		ft_strdel(&store_buff);
		return (1);
	}
	if (read_line != '\0')
		return (1);
	return (0);
}

char	*combine(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	len1 = (s1) ? ft_strlen(s1) : 0;
	len2 = ft_strlen(s2);
	result = ft_strnew(len1 + len2);
	if (result)
	{
		if (s1)
			ft_memcpy(result, s1, len1);
		ft_memcpy(result + len1, s2, len2);
	}
	if (s1)
		ft_strdel(&s1);
	return (result);
}
