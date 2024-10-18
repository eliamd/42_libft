/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:15:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 16:39:27 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strjoin concatène deux chaînes de caractères.
 * Prend 's1' (première chaîne) et 's2' (deuxième chaîne).
 * Renvoie une nouvelle chaîne résultant de la concaténation.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	new_str = malloc((ft_strlen((char *)s1) + \
	ft_strlen((char *)s2) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s1[n] != '\0')
	{
		new_str[i] = s1[n];
		i++;
		n++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		new_str[i] = s2[n];
		i++;
		n++;
	}
	new_str[i] = 0;
	return (new_str);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *str1 = "&";
// 	char *str2 = "é";

// 	char *res = ft_strjoin(str1, str2);

// 	printf("===== RESULT =====\n%s\n==================", res);

// 	return (1);
// }
