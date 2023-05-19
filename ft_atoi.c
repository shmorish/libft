/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:25:57 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/20 02:18:21 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include <stdio.h>

static int	overflow(long long num)
{
	// printf("%lld\n", num);
	// printf("-----------\n");
	if (INT_MIN <= num && num <= INT_MAX)
		return (num);
	else if (INT_MIN > num)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			minus;
	long long	result;
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
		result *= 10;
		result += str[i] - '0';
		i++;
		// printf("%lld\n",result);
	}
	// printf("%lld\n",result);
	return (overflow(result * minus));
}

// int main(void)
// {
// 	int a = ft_atoi("9223372036854775808");
// 	printf("%d\n",a);
// }