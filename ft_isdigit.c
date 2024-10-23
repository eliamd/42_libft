/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:48:17 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/22 14:06:15 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction ft_isdigit vérifie si un caractère est un chiffre.
 * Elle prend en argument un entier `c` qui le caractère à vérifier.
 * Elle renvoie 1 si le caractère est un chiffre (entre '0' et '9') et 0 sinon.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
// 	assert(ft_isdigit('1') == isdigit('1'));
// 	printf("Etape 2 : Meme resultat pour '1'\n");
// 	assert(ft_isdigit('a') == isdigit('a'));
// 	printf("Etape 3 : Meme resultat pour 'a'\n");
// 	assert(ft_isdigit(' ') == isdigit(' '));
// 	printf("Etape 4 : Meme resultat pour ' '\n");
// 	assert(ft_isdigit(argv[1][0]) == isdigit(argv[1][0]));
// 	printf("Etape 5 : Meme resultat pour '%c'\n", argv[1][0]);
// 	printf("=== Test OK === \n");
// 	return (0);
// }
