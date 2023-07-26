/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:36:55 by morishitash       #+#    #+#             */
/*   Updated: 2023/07/26 16:39:59 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_stdlib.h"

double	ft_atof(const char *str)
{
	double	result;
	double	decimal;
	int		sign;

	result = 0.0;
	decimal = 0.0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
		result = result * 10.0 + (*str++ - '0');
	if (*str == '.')
	{
		str++;
		while (ft_isdigit(*str))
		{
			decimal = decimal * 10.0 + (*str++ - '0');
		}
	}
	return ((result + decimal / 10.0) * sign);
}
