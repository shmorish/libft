/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:35:42 by morishitash       #+#    #+#             */
/*   Updated: 2023/10/24 15:32:19 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_stdlib.h"
#include "ft_string.h"

// check that the string is a valid integer
// return 1 if valid, 0 if not
int	ft_isint(char *str)
{
	long	num;
	size_t	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	if (ft_strlen(str) > 11)
		return (0);
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	num = ft_strtol(str, NULL, 10);
	if (num < INT_MIN || INT_MAX < num)
		return (0);
	return (1);
}
