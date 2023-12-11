/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:27:15 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/04 11:58:34 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	n;

	n = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (len == 0)
		return (dst);
	if (src < dst)
	{
		n = len;
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		n = 0;
		while (n < len)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
			n++;
		}
	}
	return (dst);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Hello, world!";
    char destination[15] = "";
	char source2[] = "Hello, world!";
    char destination2[15] = "";

    printf("Contenido de destination: %s\n",
		ft_memmove(destination, source, 14));
	printf("Contenido de destination ft original: %s\n",
		memmove(destination2, source2, 14));

    return 0;
} */