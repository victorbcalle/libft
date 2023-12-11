/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboluda- <vboluda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:10:28 by vboluda-          #+#    #+#             */
/*   Updated: 2023/12/01 10:10:28 by vboluda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

/* int main()
{
	char s1[] = "   Hello World!   ";
	char set[] = "W";

	char *trimmed = ft_strtrim(s1, set);

	if (trimmed)
	{
		printf("Original String: \"%s\"\n", s1);
		printf("Trimmed String: \"%s\"\n", trimmed);

		free(trimmed); // Liberar la memoria asignada
	}
	else
	{
		printf("Error: No se pudo asignar memoria
		 para la cadena trimmada.\n");
	}

	return 0;
} */