/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:38:59 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/19 20:11:51 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	if (*s == '\0' && c == 0)
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == (char)c)
			tmp = (char *)s;
		s++;
		if (*s == '\0' && c == 0)
			return ((char *)s);
	}
	return (tmp);
}
