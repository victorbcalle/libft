/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:55:29 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/08 13:55:36 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*n;

	if (!lst || !f)
		return ;
	n = lst;
	while (n)
	{
		f(n->content);
		n = n->next;
	}
}
