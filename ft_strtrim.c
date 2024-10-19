/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:53:00 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/19 10:41:49 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strtrim supprime les caractères spécifiés.
 * Prend 'str' (chaîne source) et 'str_del' (caractères à supprimer).
 * Renvoie une nouvelle chaîne sans les caractères spécifiés.
 */

int	ft_is_a_del(char caract, char const *str_del)
{
	int	i;

	i = 0;
	while (str_del[i] != '\0')
	{
		if (str_del[i] == caract)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_trim(char const *str, char const *str_del)
{
	char	*trimmed;
	size_t	i;
	size_t	n;

	trimmed = malloc(ft_strlen((char *)str) * sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	n = 0;
	while (str[i] != '\0' && ft_is_a_del(str[i], str_del) == 1)
	{
		i++;
	}
	while (str[i] != '\0')
	{
		trimmed[n] = str[i];
		n++;
		i++;
	}
	trimmed[n] = 0;
	return (trimmed);
}

char	*ft_trim_rev(char const *str, char const *str_del)
{
	char	*trimmed;
	size_t	str_len;
	size_t	del_len;
	size_t	i;

	trimmed = malloc(ft_strlen((char *)str) * sizeof(char));
	if (!trimmed)
		return (NULL);
	str_len = (size_t)ft_strlen((char *)str);
	i = str_len;
	del_len = 0;
	while (ft_is_a_del(str[i - 1], str_del) == 1)
	{
		del_len++;
		i--;
	}
	trimmed = ft_substr(str, 0, (str_len - del_len));
	return (trimmed);
}

char	*ft_strtrim(char const *str, char const *str_del)
{
	char	*trimmed;

	trimmed = malloc(ft_strlen((char *)str) * sizeof(char));
	if (!trimmed)
		return (NULL);
	trimmed = ft_trim(str, str_del);
	trimmed = ft_trim_rev(trimmed, str_del);
	return (trimmed);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int main(void)
// {
// 	char *str = "vv";
// 	char *del = "=+";

// 	char *res = ft_strtrim(str, del);

// 	printf("===== RESULT =====\n%s\n==================", res);

// 	return (1);
// }
