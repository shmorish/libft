/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 01:02:30 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/28 03:55:18 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		len;
	int		num;
	char	input;
	char	*ret;

	num = n;
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len--] = '\0';
	while (num != 0)
	{
		input = num % 10;
		num = num / 10;
		ret [len] = input + '0';
		
		len--;
	}
	if (n < 0)
		ret[len] = '-';
	return (ret);
}

int	main(void)
{
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-2));
	printf("%s\n", ft_itoa(0));
}
