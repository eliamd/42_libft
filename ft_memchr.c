/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:54:44 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 11:39:26 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * La fonction ft_memchr trouve la première occurrence du
  caractère 'letter' dans la chaîne 'str'.

 * Elle prend deux arguments : un pointeur 'str' vers la
  chaîne à traiter et un int 'letter' qui est le caractère à chercher.

 * Elle renvoie un pointeur vers le premier caractère correspondant
  dans 'str', ou NULL si le caractère n'est pas trouvé.

*/

void	*ft_memchr(const void *str, int letter, size_t len)
{
	size_t	i;
	char	*temp_str;

	temp_str = (char *)str;
	i = 0;
	while (temp_str[i] && i < len)
	{
		if ((int)temp_str[i] == letter)
			return (&temp_str[i]);
		i++;
	}
	if (letter == '\0')
		return (&temp_str[i]);
	return (NULL);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *res = ft_memchr("Bonjour", 'j', 8);

// 	printf("FAKE %s\n", res);
// 	char *res2 = memchr("Bonjour", 'j', 8);

// 	printf("VRAI %s\n", res2);
// 	return (1);
// }
