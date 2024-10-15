/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:08:16 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 15:02:02 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_memmove copie 'count' octets de la zone mémoire 'src' vers
  la zone mémoire 'dest', même si ces zones se chevauchent.

 * Elle prend trois arguments : un pointeur 'dest' vers la zone mémoire
 de destinationun pointeur 'src' vers la zone mémoire source, et un size_t
 'count' qui est le nombre d'octets à copier.

 * Elle renvoie un pointeur vers la zone mémoire de destination.
 Cette fonction est généralement utilisée pour déplacer des blocs de mémoire.
 */

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;

	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	if (ptrdest > ptrsrc && ptrdest < (ptrsrc + count))
	{
		while (count > 0)
		{
			count--;
			ptrdest[count] = ptrsrc[count];
		}
	}
	else
	{
		ft_memcpy(dest, src, count);
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

// 	ft_memmove(str2, str, 8);

// 	printf("ap : str : %s\n", str);
// 	printf("ap : str2 : %s\n", str2);

// 	printf("=== Test OK === \n");
// 	return (0);
// }
