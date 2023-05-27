/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 04:56:15 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/28 05:08:09 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (0);
	while (s[i] != '\0')
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// #include <stdio.h>

// char f(unsigned int i, char c)
// {
// 	(void)i;
// 	return c + 1;
// }

// int	main(void)
// {
// 	char *s = "123456";
// 	printf("%s\n", s);

// 	s = ft_strmapi(s, f);
// 	printf("%s\n", s);
// }