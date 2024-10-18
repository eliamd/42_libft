/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:37:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 10:44:44 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_strlcpy copie 'size' caractères de la chaîne
  'src' vers la chaîne 'dest'.

 * Elle prend trois arguments : un pointeur 'dest' vers la chaîne
   de destination, un pointeur 'src' vers la chaîne source, et un unsigned
   int 'size' qui est le nombre de caractères à copier.

 * Elle renvoie la longueur totale de la chaîne 'src'. Cette fonction est
   généralement utilisée pour copier des chaînes de manière sécurisée,
   en évitant les débordements de tampon.
 */

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	if (size == 0)
		return (count);
	i = 0;
	while (src[i] != '\0' && i < ((size_t)size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char src[] = "Hello World!";
// 	char dest[6];
// 	int i;

// 	i = ft_strlcpy(dest, src, 12);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("i: %d\n", i);
// 	return (0);
// }
