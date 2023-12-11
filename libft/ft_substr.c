/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:17:16 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/30 10:17:16 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	if (start > slen)
		len = 0;
	else if (slen - start < len)
		len = slen - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/* #include <stdio.h>

int main()
{
    const char *str = "";
    unsigned int start = 1;
    size_t length = 1;

    // Utilizando ft_substr para obtener una subcadena
    char *substring = ft_substr(str, start, length);

    if (substring == NULL) {
        printf("No se pudo obtener la subcadena.\n");
    } else {
        printf("La subcadena desde la posición %u
		 con longitud %zu es: %s\n", start, length, substring);
        free(substring); // Liberar la memoria después de su uso
    }
    return 0;
} */