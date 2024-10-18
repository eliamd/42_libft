/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:20:52 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 10:09:37 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
		}
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *res = strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 19);

// 	printf("VRAI %s\n", res);
// 	char *res2 = ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 19);

// 	printf("FAKE %s\n", res2);
// 	return (1);
// }
