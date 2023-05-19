/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:25:57 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/19 21:59:59 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	minus;
	int	result;
	int	i;

	result = 0;
	minus = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			minus = -1;
	}
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	result *= minus;
	return (result);
}
