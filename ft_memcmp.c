/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:43:23 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/19 20:41:40 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf1;
	unsigned char	*buf2;

	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	while (n != 0)
	{
		if (buf1 != buf2)
			return (buf2 - buf1);
		buf1++;
		buf2++;
		n--;
	}
	return (0);
}
