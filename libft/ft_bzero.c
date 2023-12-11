/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:39:47 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/28 10:55:38 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*p++ = 0;
		i++;
	}
}

/* #include <stdio.h>

int main()
{
    char buffer[10] = "Hola mundo";
    ft_bzero(buffer, 10);
    printf("Buffer después de ft_bzero: ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d", buffer[i]);
    }
    printf("\n");

    return 0;
} */