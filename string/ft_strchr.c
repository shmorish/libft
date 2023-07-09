/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:30:10 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 10:26:51 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == '\0' && c == 0)
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		if (*s == '\0' && c == 0)
			return ((char *)s);
	}
	return (NULL);
}
