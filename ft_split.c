/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:31:59 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/22 18:23:25 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * tab_malloc alloue et copie une sous-chaîne.
 * Prend 'str' (chaîne source), 'start' (index de début),
 * 'len' (longueur de la sous-chaîne) et 'tab' (tableau de chaînes).
 * Renvoie la sous-chaîne ou NULL en cas d'erreur.
 */

static char	*malloc_tab(const char *str, int start, int len, char **tab)
{
	char	*sub;
	int		i;

	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
	{
		i = 0;
		while (tab && tab[i] != NULL)
		{
			if (tab[i])
				free(tab[i]);
			i++;
		}
		free(tab);
		return (NULL);
	}
	ft_strlcpy(sub, (char *)str + start, len + 1);
	return (sub);
}

int	count_words(char const *str, char del)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == del)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != del)
			i++;
	}
	return (count);
}

char	**malloc_main_tab(char **tab, char const *str, char del)
{
	if (str[0] == '\0')
	{
		tab = malloc(1 * sizeof(char *));
		if (!tab)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	tab = malloc(((count_words(str, del) + 1) * sizeof(char *)));
	if (!tab)
		return (NULL);
	return (tab);
}

int	fill_tab(char const *str, char del, char **tab)
{
	int		i;
	int		n;
	int		k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] == del)
			i++;
		while (str[i + n] != '\0' && str[i + n] != del)
			n++;
		if (n != 0)
			tab[k++] = malloc_tab(str, i, n, tab);
		if ((k > 0 && tab[k - 1] == NULL) || !tab)
			return (0);
		i = i + n;
	}
	tab[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = NULL;
	tab = malloc_main_tab(tab, s, c);
	if (!tab)
		return (NULL);
	if (fill_tab(s, c, tab) == 0)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(void)
// {
// 	char *str = "bonjourzbonjourzbuhuhuzgyguhzohh";
// 	char del = 'z';
// 	int i = 0;

// 	char **res = ft_split(str, del);

// 	printf("===== RESULT =====\n");
// 	while (res[i] != NULL)
// 	{
// 		printf("Tab DE %i : %s\n", i, res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	printf("==================\n");
// 	free(res);
// 	return (1);
// }
