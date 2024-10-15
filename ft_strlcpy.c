/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:37:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 12:06:01 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction ft_strlcpy copie 'size' caractères de la chaîne
  'src' vers la chaîne 'dest'.

 * Elle prend trois arguments : un pointeur 'dest' vers la chaîne
   de destination, un pointeur 'src' vers la chaîne source, et un unsigned
   int 'size' qui est le nombre de caractères à copier.

 * Elle renvoie la longueur totale de la chaîne 'src'. Cette fonction est
   généralement utilisée pour copier des chaînes de manière sécurisée,
   en évitant les débordements de tampon.
 */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}

// int main(void)
// {
// 	char src[] = "Hello World!";
// 	char dest[6];
// 	int i;

// 	i = ft_strlcpy(dest, src, 6);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("i: %d\n", i);
// 	return (0);
// }
