/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:08:27 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 11:58:33 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_list.h"

int	ft_lstsize(t_list *lst)
{
	int		ret;
	t_list	*tmp;

	ret = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		ret++;
		tmp = tmp->next;
	}
	return (ret);
}
