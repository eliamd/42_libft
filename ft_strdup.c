/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:13:33 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 16:10:22 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strdup duplique une chaîne de caractères.
 * Prend 'src' (pointeur vers la chaîne source).
 * Renvoie un pointeur vers la nouvelle chaîne dupliquée.
 */

char	*ft_strdup(char *src)
{
	char	*strduped;
	int		i;
	int		length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	strduped = malloc((length + 1) * sizeof(char));
	if (!strduped)
		return (NULL);
	i = 0;
	while (i < length)
	{
		strduped[i] = src[i];
		i++;
	}
	strduped[i] = '\0';
	return (strduped);
}

// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*src = "Hello, world!";
// 	char	*duplicated;

// 	duplicated = ft_strdup(src);
// 	printf("Chaîne source : %s\n", src);
// 	printf("Chaîne dupliquée : %s\n", duplicated);
// 	free(duplicated);
// 	return (0);
// }
