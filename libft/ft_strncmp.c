/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:56:28 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/29 12:28:13 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0')
		&& (diff == 0) && (i < n))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (diff == 0 && i < n)
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (diff);
}

/* #include <stdio.h>
int main()
{
    const char *cadena1 = "Holaa";
    const char *cadena2 = "Holaaaaa";
    size_t n = 8;

    int resultado = ft_strncmp(cadena1, cadena2, n);

    if (resultado == 0)
    {
        printf("Las cadenas son iguales en los primeros %zu caracteres.\n", n);
    }
    else if (resultado < 0)
    {
        printf("La cadena1 es menor que la cadena2 
		en los primeros %zu caracteres.\n", n);
    }
    else
    {
        printf("La cadena1 es mayor que la cadena2 
		en los primeros %zu caracteres.\n", n);
    }

    return 0;
} */