/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:28:57 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/29 12:44:40 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>

int main() {
    const char *cadena = "Hola, mundo!";
    char caracter_a_buscar = 'H';

    const char *resultado = ft_memchr(cadena, caracter_a_buscar, strlen(cadena));

    if (resultado != NULL) {
        printf("El caracter '%c' fue encontrado en 
		la posición: %ld\n", caracter_a_buscar, resultado - cadena);
    } else {
        printf("El caracter '%c' no fue encontrado en 
		la cadena.\n", caracter_a_buscar);
    }

    return 0;
} */