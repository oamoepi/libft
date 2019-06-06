/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:51:56 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/06 14:30:50 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int	neg;
	int num;
	int	lng;

	neg = 1;
	num = 0;
	lng = 0;
	while ((*str == ' ') || (*str == '\t')
			|| (*str == '\v') || (*str == '\f')
			|| (*str == '\r') || (*str == '\n'))
		str++;
	if (*str == '-')
		neg = -1;
	if ((*str == '-' || *str == '+'))
		str++;
	while (ft_isdigit(*str))
	{
		num = ((num * 10) + (int)*str - '0');
		str++;
		lng++;
	}
	if (lng > 19)
		return (num == -1) ? 0 : -1;
	return (num * neg);
}
