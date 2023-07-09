/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:38:59 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 10:27:33 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

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
