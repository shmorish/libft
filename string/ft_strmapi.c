/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 04:56:15 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 10:27:19 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
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