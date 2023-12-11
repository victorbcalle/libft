/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:26:58 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/30 10:26:58 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((char)c != s[i])
	{
		if (!s[i])
			return (0);
		i++;
	}
	return ((char *)s + i);
}

/* #include <stdio.h>

int main() {
    const char *str = "Hello, World!";
    char search_char = 'W';

    // Utilizando ft_strchr para buscar el carácter en la cadena
    char *result = ft_strchr(str, search_char);

    if (result == NULL) {
        printf("El carácter '%c' no se encontró en la cadena.\n", search_char);
    } else {
        printf("El carácter '%c' se encontró en la posición 
            %ld de la cadena: %s\n",
               search_char, result - str, result);
    }

    return 0;
} */