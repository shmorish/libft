/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:25:57 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/21 03:56:51 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static long	check_overflow(long num, char str, int minus)
{
	long ov_div;
	long ov_mod;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	if (minus == -1)
		ov_mod += 1; 
	if ((num > ov_div) || ((num == ov_div) && (ov_mod < (str - '0'))))
	{
		if (minus == 1)
			return (LONG_MAX);
		else
			return (LONG_MIN);
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int			minus;
	long		result;
	int			i;

	result = 0;
	minus = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		if (check_overflow(result, str[i], minus) == LONG_MAX)
			return ((int)LONG_MAX);
		else if (check_overflow(result, str[i], minus) == LONG_MIN)
			return ((int)LONG_MIN);
		else
		{
			result *= 10;
			result += str[i] - '0';
			i++;
		}
	}
	return (result * minus);
}
