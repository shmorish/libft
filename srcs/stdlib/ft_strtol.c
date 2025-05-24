/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:20:08 by morishitash       #+#    #+#             */
/*   Updated: 2024/02/26 03:41:18 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include <limits.h>
#include <ctype.h>
#include <errno.h>
#include "ft_string.h"

static long	check_sign(char **str)
{
	long	sign;

	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

static int	determine_base(char **str, int base)
{
	if (base == 0)
	{
		if (!ft_strncmp(*str, "0x", 2) || !ft_strncmp(*str, "0X", 2))
		{
			base = 16;
			*str += 2;
		}
		else if (**str == '0')
			base = 8;
		else
			base = 10;
	}
	else if (base == 16)
	{
		if (!ft_strncmp(*str, "0x", 2) || !ft_strncmp(*str, "0X", 2))
			*str += 2;
	}
	else if (base == 8 && **str == '0')
	{
		(*str)++;
	}
	return (base);
}

static long	char_to_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'z')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 10);
	return (-1);
}

static long	add_digit_to_result(long result, long digit, int base, long sign)
{
	if (result > (LONG_MAX - digit) / base)
	{
		errno = ERANGE;
		if (sign == 1)
			return (LONG_MAX);
		else
			return (LONG_MIN);
	}
	return (result * base + digit);
}

long	ft_strtol(char *str, char **endptr, int base)
{
	long	result;
	long	sign;
	long	digit;

	result = 0;
	while (ft_isspace(*str))
		str++;
	sign = check_sign(&str);
	base = determine_base(&str, base);
	while (ft_isdigit(*str) || ft_isalpha(*str))
	{
		digit = char_to_digit(*str);
		if (digit < 0 || digit >= base)
			break ;
		result = add_digit_to_result(result, digit, base, sign);
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return (result * sign);
}
