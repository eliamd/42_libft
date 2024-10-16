/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:54:44 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/16 16:35:59 by edetoh           ###   ########.fr       */
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
	size_t	str_len;
	char	*temp_str;

	temp_str = (char *)str;
	str_len = -1;
	while (temp_str[str_len] != '\n')
		str_len++;
	while (str_len > 0)
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
// 	char *res = ft_strrchr("Coucou Hlello Hello Hello pp", '2');

// 	printf("%s\n", res);
// 	char *res2 = strrchr("Coucou Hlello Hello Hello pp", '2');

// 	printf("%s\n", res2);
// 	return (1);
// }
