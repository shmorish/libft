/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:45:32 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/28 00:45:09 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!array)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		array[j] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!array[j])
			return (NULL);
		k = 0;
		while (*s != c && *s != '\0')
			array[j][k++] = *s++;
		array[j++][k] = '\0';
	}
	array[j] = NULL;
	return (array);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s = "      split       this for   me  ! ";
// 	char **result = ft_split(s, ' ');
// 	while (*result != NULL)
// 	{
// 		printf("%s\n", *result);
// 		result++;
// 	}
// 	printf("%c\n", **result);
// }
