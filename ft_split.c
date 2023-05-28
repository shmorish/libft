/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:45:32 by morishitash       #+#    #+#             */
/*   Updated: 2023/05/28 11:19:52 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	word_counter(const char *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static int	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);

}

static void	*ft_free(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != '\0')
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!array)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		array[j] = (char *)malloc(sizeof(char) * (word_len(s, c)) + 1);
		if (array[j] == NULL)
			return (ft_free(array));
		k = 0;
		while (*s != c && *s != '\0')
			array[j][k++] = *s++;
		array[j++][k] = '\0';
	}
	array[j] = NULL;
	return (array);
}


// int main(void)
// {
// 	char *s = "      split       this for   me  ! ";
// 	char **result = ft_split(s, ' ');
// 	while (*result != NULL)
// 	{
// 		printf("%s\n", *result);
// 		result++;
// 	}
// }
