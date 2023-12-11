/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:24:40 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/29 14:35:15 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*s2;
	size_t	i;

	s2 = (char *)s1;
	i = 0;
	copy = (char *)malloc(ft_strlen(s2) + 1);
	if (copy == NULL)
		return (NULL);
	while (s2[i] != '\0')
	{
		copy[i] = s2[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/* #include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    const char *original = "Hola mundo!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL) {
        // Imprimir el string duplicado
        printf("Original: %s\n", original);
        printf("Duplicado: %s\n", duplicate);

        // Liberar la memoria asignada dinámicamente
        free(duplicate);
    } else {
        printf("Error al duplicar el string.\n");
    }
    return 0;
} */