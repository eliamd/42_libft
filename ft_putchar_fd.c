/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:34:23 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/23 14:34:49 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putchar_fd écrit le caractère 'c' dans 'fd'.
Prend 'c' (caractère à écrire) et 'fd' (descripteur de fichier).
Utilise write() pour écrire le caractère.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	printf("===== RESULT Putchar fd =====\n");
// 	ft_putchar_fd('C', 1);
// 	printf("=============================\n");
// 	return (1);
// }
