/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:33:24 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/30 11:33:24 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*result;
	char	*ptr;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	ptr = result;
	while (*s1 != '\0')
		*ptr++ = *s1++;
	while (*s2 != '\0')
		*ptr++ = *s2++;
	*ptr = '\0';
	return (result);
}

/* #include <stdio.h>

int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "World!";

    char *result = ft_strjoin(str1, str2);

    if (result == NULL) {
        printf("No se pudo concatenar las cadenas.\n");
    } else {
        printf("La cadena concatenada es: %s\n", result);
        free(result);
    }

    return 0;
} */