/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:55:03 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/08 13:55:14 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;
	t_list	*tmp;

	if (!lst)
		return ;
	n = *lst;
	while (n)
	{
		tmp = n->next;
		ft_lstdelone(n, del);
		n = tmp;
	}
	*lst = NULL;
}
