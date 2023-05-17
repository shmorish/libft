/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:43:23 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/17 22:02:00 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char   *buf1;
	unsigned char   *buf2;

	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	while (n != 0)
	{
		if (buf1 != buf2)
		{
			if (buf1 < buf2)
				return (1);
			else
				return (-1);
		}

		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	printf("%d : %d\n", memcmp("aiueo", "aiue1", 5), ft_memcmp("aiueo", "aiue1", 5));
// 	printf("%d : %d\n", memcmp("aiue1", "aiueo", 5), ft_memcmp("aiue1", "aiueo", 5));
// 	printf("%d : %d\n", memcmp("aiueo", "aiueo", 5), ft_memcmp("aiueo", "aiueo", 5));
// 	printf("%d : %d\n", memcmp("aiueo", "1iueo", 5), ft_memcmp("aiueo", "1iueo", 5));
// 	printf("%d : %d\n", memcmp("aiueo", "aiue1", 0), ft_memcmp("aiueo", "aiue1", 0));
// 	printf("%d : %d\n", memcmp("", "", 0), ft_memcmp("", "", 0));
// 	return (0);
// }