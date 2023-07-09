/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 01:02:30 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 10:15:21 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_stdlib.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	count_digits(int num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;

	len = count_digits(n);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	if (n < 0)
		ret[0] = '-';
	else if (n == 0)
		ret[0] = '0';
	ret[len--] = '\0';
	while (n != 0)
	{
		ret [len--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (ret);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(-2));
// 	printf("%s\n", ft_itoa(0));
// }
