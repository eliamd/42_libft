/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:31:59 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/19 12:16:16 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * tab_malloc alloue et copie une sous-chaîne.
 * Prend 'str' (chaîne source), 'start' (index de début),
 * 'len' (longueur de la sous-chaîne) et 'tab' (tableau de chaînes).
 * Renvoie la sous-chaîne ou NULL en cas d'erreur.
 */

static char	*tab_malloc(const char *str, int start, int len, char **tab)
{
	char	*sub;
	int		tablen;
	int		i;

	i = 0;
	tablen = 0;
	while (tab[tablen] != NULL)
		tablen++;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		while (i < tablen)
		{
			free(tab[i]);
			i++;
		}
		free(tab);
		return (NULL);
	}
	ft_strlcpy(sub, (char *)str + start, len + 1);
	return (sub);
}

char	**ft_split(char const *str, char del)
{
	int		i;
	int		n;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	tab = malloc((ft_strlen((char *)str + 1) * sizeof(char *)));
	if (!tab || !str)
		return (NULL);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] == del)
			i++;
		while (str[i + n] != '\0' && str[i + n] != del)
			n++;
		if (n != 0)
			tab[k++] = tab_malloc(str, i, n, tab);
		if ((k > 0 && tab[k - 1] == NULL) || !tab)
			return (NULL);
		i = i + n;
	}
	tab[k] = 0;
	return (tab);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(void)
// {
// 	char *str = "Bonzour je suis zeliamzlezbgzclementzarretezdezcopierzmonzgit";
// 	char del = 'z';
// 	int i = 0;

// 	char **res = ft_split(str, del);

// 	printf("===== RESULT =====\n");
// 	while (i < 10)
// 	{
// 		printf("Tab DE %i : %s\n", i, res[i]);
// 		i++;
// 	}
// 	printf("==================\n");
// 	return (1);
// }
