/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:35:42 by morishitash       #+#    #+#             */
/*   Updated: 2023/07/31 18:37:28 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ctype.h"


// return 1 if str is int from INT_MIN to INT_MAX
// return 0 if str is not int
// use like atoi
int	ft_isint(char *str)
{
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0');
	if (*str != '\0')
		return (0);
	if (result * sign > INT_MAX || result * sign < INT_MIN)
		return (0);
	return (1);
}
