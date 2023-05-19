/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:35:49 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/19 19:50:35 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	max_copy;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dest == NULL)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	max_copy = dstsize - dest_len - 1;
	index = 0;
	while (index < max_copy)
	{
		if (src[index] == '\0')
			break ;
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (src_len + dest_len);
}
