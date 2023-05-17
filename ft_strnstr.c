/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:03:19 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/18 01:50:38 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if ((*haystack == '\0') || (*needle == '\0'))
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i + c] != '\0' && needle[c] != '\0' && haystack[i + c] != needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char* haystack = "Hello, world!";
// 	const char* needle = "world";

// 	char* result = ft_strnstr(haystack, needle, strlen(haystack));
// 	if (result != NULL)
// 		printf("Found at position: %ld\n", result - haystack);
// 	else
// 		printf("Not found\n");
// 	return 0;
// }