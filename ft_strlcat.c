/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:22:17 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 15:10:03 by edetoh           ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, char *src, \
	size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		++src_len;
	while (dest[dest_len] != '\0' && dest_len < size)
		++dest_len;
	if (dest_len == size)
		return (dest_len + src_len);
	i = 0;
	while (i < src_len && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
// 	char src[7] = "123456";
// 	char dest[7] = "123456";
// 	int i;

// 	printf("src: %s\n", src);
// 	i = ft_strlcpy(dest, src, 14);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("i: %d\n", i);
// 	return (0);
// }
