/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:18:23 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/28 13:37:16 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		a;

	a = ft_strlen(src);
	i = 0;
	if (dstsize != '\0')
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (a);
}

/* #include <stdio.h>
int	main()
{
	char src[] = "Campus42";
	char dest[] = "";
	printf("%zu | %s\n", ft_strlcpy(dest, src, 9), dest);
} */