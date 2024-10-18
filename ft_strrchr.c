/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:54:44 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/17 14:44:02 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strrchr trouve la dernière occurrence de 'letter' dans 'str'.
 * Prend 'str' (chaîne) et 'letter' (caractère à chercher).
 * Renvoie un pointeur vers le caractère trouvé, ou NULL.
 */

char	*ft_strrchr(const char *str, int letter)
{
	unsigned int	str_len;
	char			*temp_str;

	temp_str = (char *)str;
	str_len = 0;
	while (temp_str[str_len])
		str_len++;
	while (str_len + 1 > 0)
	{
		if ((int)temp_str[str_len] == letter)
			return (&temp_str[str_len]);
		str_len--;
	}
	return (NULL);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *res = ft_strrchr("abbbbbbbb", 'a');

// 	printf("FAKE %s\n", res);
// 	char *res2 = strrchr("abbbbbbbb", 'a');

// 	printf("VRAI %s\n", res2);
// 	return (1);
// }
