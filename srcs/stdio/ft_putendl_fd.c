/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 05:23:47 by shmorish          #+#    #+#             */
/*   Updated: 2024/02/26 05:20:09 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	ft_putendl_fd(const char *s, int fd)
{
	int	len;

	len = 0;
	len = ft_putstr_fd((char *)s, fd);
	len += ft_putchar_fd('\n', fd);
	return (len);
}
