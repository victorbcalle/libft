/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:53:59 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/08 13:54:08 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (!lst)
		return ;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	n = ft_lstlast(*lst);
	n->next = new;
}
