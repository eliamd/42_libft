/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:30:11 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 15:36:35 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_strncmp compare les 'n' premiers caractères
  de deux chaînes de caractères 's1' et 's2'.

 * Elle prend trois arguments : deux pointeurs 's1' et 's2' vers les chaînes
  à comparer, et un unsigned int 'n' qui est le nombre de caractères à comparer.

 * Elle renvoie un entier qui est la différence entre les deux premiers
  caractères non identiques des chaînes.

 */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	n = n - 1;
	while (*s1 && (*s1 == *s2) && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <assert.h>
// #include <ctype.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
//     assert(argc == 3);
//     printf("Etape 1 : L'appel a deux arguments\n");
//     assert(ft_strncmp("abc", "abc", 3) == strncmp("abc", "abc", 3));
//     printf("Etape 2 : Meme resultat pour 'abc' et 'abc'\n");
//     assert(ft_strncmp("abc", "abd", 3) == strncmp("abc", "abd", 3));
//     printf("Etape 3 : Meme resultat pour 'abc' et 'abd'\n");
//     assert(ft_strncmp("abc", "abc", 2) == strncmp("abc", "abc", 2));
//     printf("Etape 4 : Meme resultat pour 'abc' et 'abc' avec n=2\n");
//     assert(ft_strncmp(argv[1], argv[2], 3) == strncmp(argv[1], argv[2], 3));
//     printf("Etape 5 : Meme resultat pour '%s' et '%s'\n", argv[1], argv[2]);
//     printf("=== Test OK === \n");
//     return (0);
// }
