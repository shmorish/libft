/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:43:23 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/18 15:33:16 by morishitash      ###   ########.fr       */
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
