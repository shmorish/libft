/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:36:54 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/16 16:19:38 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((64 < c && c < 91) || (96 < c && c < 123))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int num,num1;
// 	num = ft_isalpha('3');
// 	num1 = 	isalpha('3');
// 	printf("%d, %d",num, num1);
// }
