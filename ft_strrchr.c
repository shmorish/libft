/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morishitashoto <morishitashoto@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:38:59 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/17 13:12:40 by morishitash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	while (*s == '\0')
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	return (tmp);
}
