/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:34:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/22 15:15:26 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strmapi applique une fonction à chaque caractère.
 * Prend 's' (chaîne source) et 'f' (fonction à appliquer).
 * Renvoie une nouvelle chaîne modifiée ou NULL en cas d'erreur.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_mod;
	int		str_len;
	int		i;

	str_len = ft_strlen((char *)s);
	str_mod = malloc((str_len + 1) * sizeof(char));
	if (!str_mod)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		str_mod[i] = f(i, s[i]);
		i++;
	}
	str_mod[i] = 0;
	return (str_mod);
}

// char	i_love_alphabet(unsigned int index, char c)
// {
// 	int		i;
// 	char	letter;

// 	(void)c;
// 	i = index % 26;
// 	letter = 'a' + i;
// 	return (letter);
// }

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(void)
// {
// 	char *str = "Bonzour je suis zeliamzlezbgzclementzarretezdezcopierzmonzgit";

// 	char *res = ft_strmapi(str, i_love_alphabet);

// 	printf("===== RESULT =====\n");
// 	printf("%s\n", res);
// 	printf("==================\n");
// 	return (1);
// }
