/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:42:36 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/23 14:36:51 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_calloc alloue de la mémoire pour un tableau de
'nmemb' éléments de 'size' octets chacun.

Prend 'nmemb' (nombre d'éléments) et
'size' (taille de chaque élément).

Initialise la mémoire à zéro et renvoie un pointeur vers elle,
ou NULL en cas d'échec.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*obj;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	obj = malloc(nmemb * size);
	if (!obj)
		return (NULL);
	ft_bzero(obj, nmemb * size);
	return (obj);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	int		size = 8539;
// 	void	*d1 = ft_calloc(size, sizeof(int));
// 	void	*d2 = calloc(size, sizeof(int));

// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("ERROR");
// 	free(d1);
// 	free(d2);
// 	printf("OK");
// 	return (0);
// }
