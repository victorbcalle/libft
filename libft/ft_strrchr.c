/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:24:05 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/04 13:02:55 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
    const char *cadena = "Hola, mundo!";
    char caracter_a_buscar = 'o';

    char *resultado = ft_strrchr(cadena, caracter_a_buscar);

    if (resultado != NULL)
    {
        printf("El caracter '%c' fue encontrado en la posición:
		 %ld\n", caracter_a_buscar, resultado - cadena);
    }
    else
    {
        printf("El caracter '%c' no fue encontrado en la cadena.\n",
		 caracter_a_buscar);
    }

    return 0;
} */