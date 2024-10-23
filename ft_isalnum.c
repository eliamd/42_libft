/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:48:17 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/22 14:06:40 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction ft_isalnum vérifie si un caractère est un chiffre ou une lettre.
 * Elle prend en argument un entier `c` qui représente le caractère à vérifier.
 * Elle renvoie 1 si le caractère est un chiffre ou une lettre et 0 sinon.
 */

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || \
	((c >= '0' && c <= '9')))
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
// 	assert(ft_isalnum('a') == isalnum('a'));
// 	printf("Etape 2 : Meme resultat pour 'a'\n");
// 	assert(ft_isalnum('Z') == isalnum('Z'));
// 	printf("Etape 3 : Meme resultat pour 'Z'\n");
// 	assert(ft_isalnum('1') == isalnum('1'));
// 	printf("Etape 4 : Meme resultat pour '1'\n");
// 	assert(ft_isalnum(' ') == isalnum(' '));
// 	printf("Etape 5 : Meme resultat pour ' '\n");
// 	assert(ft_isalnum(argv[1][0]) == isalnum(argv[1][0]));
// 	printf("Etape 6 : Meme resultat pour '%c'\n", argv[1][0]);
// 	printf("=== Test OK === \n");
// 	return (0);
// }
