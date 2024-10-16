/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:54:04 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 14:44:17 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_memcpy copie 'count' octets de la zone mémoire 'src'
 vers la zone mémoire 'dest'.

 * Elle prend trois arguments : un pointeur 'dest' vers la zone mémoire
  de destination, un pointeur 'src' vers la zone mémoire source, et un
  size_t 'count' qui est le nombre d'octets à copier.

 * Elle renvoie un pointeur vers la zone mémoire de destination. Cette
  fonction est généralement utilisée pour copier des blocs de mémoire.
 */

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	i = 0;
	while (i < count)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
}

// #include <string.h>
// #include <assert.h>
// #include <stdlib.h>
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	char	str[8] = "bonjour";
// 	char	str2[8] = "bonsoir";

// 	printf("av : str : %s\n", str);
// 	printf("av : str2 : %s\n", str2);

// 	ft_memcpy(str2, str, 8);

// 	printf("ap : str : %s\n", str);
// 	printf("ap : str2 : %s\n", str2);

// 	printf("=== Test OK === \n");
// 	return (0);
// }
