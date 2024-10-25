/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:48:17 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/25 11:10:37 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The ft_isdigit function checks whether a character is a digit.
 * It takes as argument an integer `c` which is the character to be checked.
 * It returns 1 if the character is a digit
 * (between '0' and '9') and 0 otherwise.
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
