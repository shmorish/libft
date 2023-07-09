/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:18:30 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 11:58:07 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_list.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*output;

	if (new == NULL)
		return ;
	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			output = ft_lstlast(*lst);
			output->next = new;
		}
	}
}
