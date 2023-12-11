/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:25:45 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/28 10:36:56 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
