/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:26:13 by shmorish          #+#    #+#             */
/*   Updated: 2023/05/28 15:29:03 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nxt;

	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		nxt = lst->next;
		f(lst->content);
		lst = nxt;
	}
}
