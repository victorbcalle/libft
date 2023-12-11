/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:38:10 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/30 13:23:59 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ldest;
	unsigned int	lsrc;

	i = 0;
	j = 0;
	while (dst[j] != '\0' && j < dstsize)
	{
		j++;
	}
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize <= ldest)
	{
		return (dstsize + lsrc);
	}
	while (src[i] != '\0' && (i < dstsize - ldest - 1))
	{
		dst[ldest + i] = src[i];
		i++;
	}
	dst[ldest + i] = '\0';
	return (ldest + lsrc);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
	char a[] = "Hola";
	char b[] = "Mundo";
	int size;

	size = 3;
	
	printf ("%zu\n", ft_strlcat (b, a, size));
	printf ("%lu", strlcat (b, a, size));
	return 0;
} */