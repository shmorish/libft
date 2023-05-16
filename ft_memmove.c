/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:59:22 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/16 19:30:09 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}

// int main(void)
// {
//     char str[12];
//     char *s = "abcdefg";
//     ft_memmove(str, s, 7);
//     printf("%s\n", str);

//     char str1[100] = "123456789";
//     ft_memmove(str1 + 5, str1, 11);
//     printf("%s\n", str1);
//     return 0;
// }
