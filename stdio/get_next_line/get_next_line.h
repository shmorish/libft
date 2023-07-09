/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 00:05:03 by morishitash       #+#    #+#             */
/*   Updated: 2023/07/09 10:50:47 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	string_len(const char *s);
char	*copy_arr(char *s);
char	*add_line(char *s1, char *s2);
int		newline_ex(char *s, int c);
size_t	newline_pos(char *s);

#endif