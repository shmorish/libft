/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:16:43 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 11:58:23 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_list.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ret;

	ret = lst;
	if (ret == NULL)
		return (0);
	while (ret->next != NULL)
		ret = ret->next;
	return (ret);
}
