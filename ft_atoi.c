/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:36:24 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 14:30:56 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_atoi convertit une chaîne de caractères en un entier.
 * Elle prend en argument une chaîne de caractères `str`.
 * Elle renvoie le nombre entier correspondant à la chaîne d'entrée.
 */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 0;
	n = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2)
	{
		n *= -1;
	}
	return (n);
}

	// #include <stdlib.h>
	// #include <stdio.h>
	// #include <unistd.h>
	// #include <assert.h>

	// int	main(int argc, char **argv)
	// {
	// 	assert(argc == 2);
	// 	printf("Etape 1 : L'appel a un arguments\n");
	// 	assert(ft_atoi("-123") == atoi("-123"));
	// 	printf("Etape 2 : Meme resultat '-123'\n");
	// 	assert(ft_atoi("0") == atoi("0"));
	// 	printf("Etape 3 : Meme resultat '0'\n");
	// 	assert(ft_atoi("") == atoi(""));
	// 	printf("Etape 4 : Meme resultat ''\n");
	// 	assert(ft_atoi("bonjour") == atoi("bonjour"));
	// 	printf("Etape 5 : Meme resultat 'bonjours'\n");
	// 	assert(ft_atoi("++-=-423455454") == atoi("++-=-423455454"));
	// 	printf("Etape 6 : Meme resultat '++-=-423455454'\n");
	// 	assert(ft_atoi("666") == atoi("666"));
	// 	printf("Etape 7 : Meme resultat '666'\n");
	// 	assert(ft_atoi(argv[1]) == atoi(argv[1]));
	// 	printf("Etape 8 : Meme resultat '%s'\n", argv[1]);
	// 	printf("=== Test OK === \n");
	// 	return (0);
	// }
