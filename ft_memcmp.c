/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:11:34 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 10:27:06 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memcmp compare 'n' octets de 's1' et 's2'.
 * Prend 's1', 's2' (pointeurs) et 'n' (taille).
 * Renvoie la différence entre les deux premiers octets non identiques.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arg1;
	unsigned char	*arg2;
	size_t			i;

	arg1 = (unsigned char *)s1;
	arg2 = (unsigned char *)s2;
	i = 0;
	if (n < 1)
		return (0);
	while (i < n)
	{
		if (arg1[i] != arg2[i])
			return ((int)arg1[i] - (int)arg2[i]);
		i++;
	}
	return (0);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	char *str1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
// 	char *str2 = "\xff\0\0\xaa\0\xde\x00MBS";
// 	int res1 = ft_memcmp(str1, str2, 9);
// 	int res2 = memcmp(str1, str2, 9);
// 	printf("FAUX : %d\n", res1);
// 	printf("VRAI : %d\n", res2);
// 	return (0);
// }
