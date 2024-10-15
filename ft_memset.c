/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:05:01 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 11:24:36 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_memset remplit les premiers 'n' octets de la zone
  mémoire pointée par 'ptr' avec l'octet 'c'.

 * Elle prend trois arguments : un pointeur 'ptr' vers la zone mémoire à remplir,
  un int 'c' qui est converti en unsigned char et utilisé pour remplir la mémoire
  , et un size_t 'n' qui est la taille de la zone mémoire à remplir.

 * Elle renvoie un pointeur vers la zone mémoire remplie.
  Cette fonction est généralement utilisée pour initialiser
   une zone mémoire à une valeur spécifique.
 */

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// #include <string.h>
// #include <assert.h>
// #include <stdlib.h>
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	*str;
// 	char	*str2;

// 	assert(argc == 2);
// 	printf("Etape 1 : L'appel a un arguments\n");
// 	str = ft_memset(malloc(50), 'a', 50);
// 	str2 = memset(malloc(50), 'a', 50);
// 	assert(memcmp(str, str2, 50) == 0);
// 	printf("Etape 2 : Meme resultat pour 'a'\n");
// 	str = ft_memset(malloc(50), 'Z', 50);
// 	str2 = memset(malloc(50), 'Z', 50);
// 	assert(memcmp(str, str2, 50) == 0);
// 	printf("Etape 3 : Meme resultat pour 'Z'\n");
// 	str = ft_memset(malloc(50), '1', 50);
// 	str2 = memset(malloc(50), '1', 50);
// 	assert(memcmp(str, str2, 50) == 0);
// 	printf("Etape 4 : Meme resultat pour '1'\n");
// 	str = ft_memset(malloc(50), argv[1][0], 50);
// 	str2 = memset(malloc(50), argv[1][0], 50);
// 	assert(memcmp(str, str2, 50) == 0);
// 	printf("Etape 5 : Meme resultat pour '%c'\n", argv[1][0]);
// 	printf("=== Test OK === \n");
// 	return (0);
// }
