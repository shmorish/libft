/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:35:49 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/16 17:59:07 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char str1[128] = {1,1,1,1,1,1,1};
// 	char str2[] = "ab\0cde";        /* 途中に空文字のある文字列 */
// 	int i;
// 	printf("コピー前　中身の確認\n");
// 	for (i=0; i<7; i++)
// 		printf("%#x ",str1[i]);
// 	printf("\n");
// 	ft_memcpy(str1, str2, 5);

// 	printf("コピー後　中身の確認\n");
// 	for (i=0; i<7; i++)
// 		printf("%#x ",str1[i]);
// 	printf("\n");

// 	return 0;
// }
