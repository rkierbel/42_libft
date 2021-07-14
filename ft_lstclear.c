/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkierbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:17:14 by rkierbel          #+#    #+#             */
/*   Updated: 2021/04/07 13:47:11 by rkierbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	temp = *lst;
	temp2 = temp;
	while (temp != 0)
	{
		del(temp->content);
		temp = temp->next;
		free(temp2);
		temp2 = temp;
	}
	*lst = 0;
}
