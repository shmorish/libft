/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:25:57 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/21 02:27:40 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include <stdio.h>

int	check_overflow(int num, char str, int minus)
{
	int ov_div;
	int ov_mod;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
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
	int			result;
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
		if (result == check_overflow(result, str[i], minus))
		{
			result *= 10;
			result += str[i] - '0';
			i++;
		}
	}
	return (result * minus);
}

// int main(void)
// {
// 	int a = ft_atoi("9223372036854775808");
// 	printf("%d\n",a);
// }