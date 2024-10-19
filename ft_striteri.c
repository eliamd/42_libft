/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:34:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/19 16:16:25 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_striteri applique une fonction à chaque caractère.
 * Prend 's' (chaîne source) et 'f' (fonction à appliquer).
 * Ne renvoie rien. Modifie la chaîne source.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		str_len;
	int		i;

	str_len = ft_strlen(s);
	i = 0;
	while (i < str_len)
	{
		f(i, &s[i]);
		i++;
	}
}

// void	i_love_alphabet(unsigned int index, char *c)
// {
// 	int		i;

// 	i = index % 26;
// 	*c = 'a' + i;
// }

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(void)
// {
//     char str[] = "Hello, World!";

// 	printf("BEFORE : %s\n", str);
// 	ft_striteri(str, i_love_alphabet);
// 	printf(" AFTER : %s\n", str);
// 	printf("==================\n");
// 	return (1);
// }
