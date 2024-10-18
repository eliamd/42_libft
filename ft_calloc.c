/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:42:36 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/18 12:27:27 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*obj;

	obj = malloc(count * size);
	if (!obj)
		return (NULL);
	ft_bzero(obj, count);
	return (obj);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	int		size = 8539;
// 	void	*d1 = ft_calloc(size, sizeof(int));
// 	void	*d2 = calloc(size, sizeof(int));

// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("ERROR");
// 	free(d1);
// 	free(d2);
// 	printf("OK");
// 	return (0);
// }
