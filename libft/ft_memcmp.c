/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:45:47 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/29 13:04:06 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (str1[i] != str2[i])
		{
			return ((int)(str1[i] - str2[i]));
		}
		i++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int main() {
    const char *cadena1 = "Hola, mundo!";
    const char *cadena2 = "";
    size_t n = 12;

    // Usando la función original memcmp para comparar resultados
    int resultado_original = memcmp(cadena1, cadena2, n);

    printf("Usando la función original memcmp:\n");
    if (resultado_original == 0) {
        printf("Los primeros %zu bytes son iguales.\n", n);
    } else if (resultado_original < 0) {
        printf("Los primeros %zu bytes de la 
		cadena1 son menores que los de la cadena2.\n", n);
    } else {
        printf("Los primeros %zu bytes de la 
		cadena1 son mayores que los de la cadena2.\n", n);
    }

    // Usando la función ft_memcmp que proporcionaste
    int resultado_propio = ft_memcmp(cadena1, cadena2, n);

    printf("\nUsando la función personalizada ft_memcmp:\n");
    if (resultado_propio == 0) {
        printf("Los primeros %zu bytes son iguales.\n", n);
    } else if (resultado_propio < 0) {
        printf("Los primeros %zu bytes de la cadena1 
		son menores que los de la cadena2.\n", n);
    } else {
        printf("Los primeros %zu bytes de la cadena1 
		son mayores que los de la cadena2.\n", n);
    }

    return 0;
} */