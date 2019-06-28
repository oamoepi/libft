/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 01:49:11 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/28 02:11:51 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int	i;
	int	digit;
	int	operator;
	int	lng;

	i = 0;
	digit = 0;
	lng = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	operator = 1;
	if (str[i] == '-')
		operator = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		digit = 10 * digit + str[i] - '0';
		i++;
		lng++;
	}
	if (lng > 19)
		return ((operator == -1) ? 0 : -1);
	return (operator * digit);
}
