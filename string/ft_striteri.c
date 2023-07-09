/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 05:05:25 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 10:26:57 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	idx;

	if (s == NULL || f == NULL)
		return ;
	idx = 0;
	while (*s != '\0')
		f(idx++, s++);
}

// #include <string.h>
// #include <stdio.h>

// void f(unsigned int i, char *s)
// {
// 	(void)i;
// 	*s = ft_tolower(*s);
// }

// int	main(void)
// {
// 	char s[] = "aAaAa";
// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// }
