/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:03:19 by morishitash       #+#    #+#             */
/*   Updated: 2023/07/09 10:27:28 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	n_len = ft_strlen(needle);
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i + c] != '\0' && needle[c] != '\0'
			&& haystack[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
