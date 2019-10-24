/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:11:22 by amoepi            #+#    #+#             */
/*   Updated: 2019/10/01 19:07:15 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include <unistd.h>
# include <string.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>

int		get_next_line(int const fd, char **line);
char	*combine(char *s1, char *s2);

#endif
