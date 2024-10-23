/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:48:17 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/22 14:07:58 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction ft_isprint vérifie si un caractère est
 imprimable (y compris l'espace).

 * Elle prend en argument un entier `c` qui représente le code
  ASCII du caractère à vérifier.

 * Elle renvoie 1 si le caractère est imprimable
 (dans la plage ASCII de 32 à 126 inclus) et 0 sinon.
 */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 47) || \
	(c >= 40 && c <= 47) || \
	(c >= 48 && c <= 126))
		return (1);
	return (0);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <assert.h>
// #include <ctype.h>

// int	main(int argc, char **argv)
// {
// 	assert(argc == 2);
// 	printf("Etape 1 : L'appel a un arguments\n");
// 	assert(ft_isprint('a') == isprint('a'));
// 	printf("Etape 2 : Meme resultat pour 'a'\n");
// 	assert(ft_isprint('Z') == isprint('Z'));
// 	printf("Etape 3 : Meme resultat pour 'Z'\n");
// 	assert(ft_isprint('1') == isprint('1'));
// 	printf("Etape 4 : Meme resultat pour '1'\n");
// 	assert(ft_isprint(' ') == isprint(' '));
// 	printf("Etape 5 : Meme resultat pour ' '\n");
// 	assert(ft_isprint('!') == isprint('!'));
// 	printf("Etape 6 : Meme resultat pour '!'\n");
// 	assert(ft_isprint('@') == isprint('@'));
// 	printf("Etape 7 : Meme resultat pour '@'\n");
// 	assert(ft_isprint('/') == isprint('/'));
// 	printf("Etape 8 : Meme resultat pour '/'\n");
// 	assert(ft_isprint('[') == isprint('['));
// 	printf("Etape 9 : Meme resultat pour '['\n");
// 	assert(ft_isprint(']') == isprint(']'));
// 	printf("Etape 10 : Meme resultat pour ']'\n");
// 	assert(ft_isprint(argv[1][0]) == isprint(argv[1][0]));
// 	printf("Etape 11 : Meme resultat pour '%c'\n", argv[1][0]);
// 	printf("=== Test OK === \n");
// 	return (0);
// }
