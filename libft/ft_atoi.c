/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoepi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:51:56 by amoepi            #+#    #+#             */
/*   Updated: 2019/06/21 13:16:11 by amoepi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	digit;
	int	operator;

	i = 0;
	digit = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v')
			|| (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	operator = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			operator = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		digit = 10 * digit + str[i] - '0';
		i++;
	}
	return (operator * digit);
}
