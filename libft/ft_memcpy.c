/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:25:50 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/04 11:56:55 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc = (const char *)src;

	if (dst == NULL && src == NULL)
		return (0);
	cdst = (char *)dst;
	while (n--)
	{
		*cdst++ = *csrc++;
	}
	return (dst);
}

/* #include <stdio.h>
int main()
{
    char source[] = "Hola, mundo!";
    char destination[20];

    // Uso de memcpy para copiar la cadena desde source hasta destination
    ft_memcpy(destination, source, 12);

    // Imprimir el contenido de destination
    printf("Contenido de destination: %s\n", destination);

    return 0;
} */