/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:34:23 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/23 14:33:49 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putendl_fd écrit la chaîne 's' suivie d'un '\n' dans 'fd'.
Prend 's' (chaîne à écrire) et 'fd' (descripteur de fichier).
Utilise write() pour écrire la chaîne et le '\n'.
*/

void	ft_putendl_fd(char *s, int fd)
{
	int	str_len;

	str_len = ft_strlen(s);
	write(fd, s, str_len);
	write(fd, "\n", 1);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	printf("===== RESULT Putstr fd =====\n");
// 	ft_putendl_fd("123", 1);
// 	printf("=============================\n");
// 	return (1);
// }
