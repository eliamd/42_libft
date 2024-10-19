/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:51:10 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/19 17:21:21 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	numchar;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		numchar = n + '0';
		write(fd, &numchar, 1);
	}
}
// #include  <string.h>
// #include  <stdio.h>
// #include  <unistd.h>

// int	main(void)
// {
// 	ft_putnbr_fd(2147483647, 1); // Test INT_MAX
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1); // Test INT_MIN
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(2050454, 1); // Test nombre aléatoire
// 	write(1, "\n", 1);
// 	return (0);
// }
