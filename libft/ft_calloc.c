/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:07:01 by vboluda-          #+#    #+#             */
/*   Updated: 2023/11/30 10:07:01 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Utilizando ft_calloc para reservar memoria e inicializar a cero
    int *arr = (int *)ft_calloc(num_elements, element_size);

    if (arr == NULL) {
        perror("ft_calloc");
        exit(EXIT_FAILURE);
    }

    // Imprimir el contenido del array
    for (size_t i = 0; i < num_elements; ++i) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Liberar la memoria cuando ya no se necesite
    free(arr);
	return (0);
} */
