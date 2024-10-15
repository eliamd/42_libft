/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:19:43 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 15:25:59 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_tolower convertit une lettre
  majuscule en minuscule si elle est en majuscule.

 * Elle prend un argument : un caractère 'letter' qui est la lettre à convertir.

 * Elle renvoie le caractère converti en minuscule si 'letter' est
   une majuscule, sinon elle renvoie 'letter' tel quel.
 */

int	ft_tolower(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (letter + 32);
	return (letter);
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
// 	assert(ft_tolower('a') == tolower('a'));
// 	printf("Etape 2 : Meme resultat pour 'a'\n");
// 	assert(ft_tolower('Z') == tolower('Z'));
// 	printf("Etape 3 : Meme resultat pour 'Z'\n");
// 	assert(ft_tolower('1') == tolower('1'));
// 	printf("Etape 4 : Meme resultat pour '1'\n");
// 	assert(ft_tolower(' ') == tolower(' '));
// 	printf("Etape 5 : Meme resultat pour ' '\n");
// 	assert(ft_tolower(argv[1][0]) == tolower(argv[1][0]));
// 	printf("Etape 6 : Meme resultat pour '%c'\n", argv[1][0]);
// 	printf("=== Test OK === \n");
// 	return (0);
// }
