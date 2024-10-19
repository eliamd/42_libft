/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:16:47 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/19 15:21:36 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_itoa convertit un entier en chaîne de caractères.
 * Prend 'n' (entier). Renvoie une chaîne représentant
 * l'entier ou NULL en cas d'erreur.
 */

int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		int_len;
	int		nb;

	int_len = ft_int_len(n);
	str = malloc((int_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nb = n;
	str[int_len] = 0;
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--int_len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	return (str);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("===== RESULT iTOA =====\n");
// 	printf("Res : %s\n", ft_itoa(ft_atoi(argv[1])));
// 	printf("=======================\n");
// 	return (1);
// }
