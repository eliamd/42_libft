/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:52:31 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 16:11:52 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_substr extrait une sous-chaîne de 'str'.
 * Prend 'str' (chaîne source), 'start' (index de début),
 * et 'len' (longueur de la sous-chaîne). Renvoie la sous-chaîne.
 */

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	k;

	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (i >= start && k < len)
		{
			sub_str[k] = str[i];
			k++;
		}
		i++;
	}
	sub_str[k] = '\0';
	return (sub_str);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *str = "1234567890";
// 	unsigned int start = 100;
// 	size_t lensent = 100;

// 	char *res = ft_substr(str, start, lensent);

// 	printf("===== RESULT =====\n%s\n==================", res);

// 	return (1);
// }
