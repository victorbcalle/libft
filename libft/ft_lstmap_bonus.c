/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:55:53 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/11 13:01:08 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*n;
	t_list	*node;
	void	*tmp;

	if (!lst)
		return (NULL);
	n = 0;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		node = ft_lstnew(tmp);
		if (node != NULL)
		{
			ft_lstadd_back(&n, node);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&n, del);
			del(tmp);
			return (0);
		}
	}
	return (n);
}
