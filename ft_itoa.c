/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 01:02:30 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/28 04:34:12 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	int		num;
	char	*ret;

	num = n;
	len = 1;
	if (n <= 0)
		len++;
	while (n /= 10)
		len++;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	if (num < 0)
		ret[0] = '-';
	if (num == 0)
	{
		ret[0] = '0';
		return (ret);
	}
	ret[len--] = '\0';
	while (num != 0)
	{
		ret [len--] = ft_abs(num % 10) + '0';
		num /= 10;
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
