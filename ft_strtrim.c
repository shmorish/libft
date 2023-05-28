/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 04:10:05 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/28 10:49:44 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	while (ft_strrchr(set, s1[end]) != NULL)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "   a a a 3127890 a aaa  ";
// 	printf("%s\n", ft_strtrim(s, " a"));
// }