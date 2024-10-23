/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:06:49 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/23 14:38:03 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_lstadd_back ajoute 'new' à la fin de 'lst'.

Prend 'lst' (adresse du pointeur vers le début de la liste)
et 'new' (nouvel élément à ajouter).

Ne renvoie rien.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
		lst = &(*lst)->next;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main(void)
// {
// 	t_list *node;
// 	char *content = "Hello, world!";

// 	node = ft_lstnew(content);
// 	if (node)
// 	{
// 		printf("Node content: %s\n", (char *)node->content);
// 		printf("Node next bf add: %p\n", (void *)node->next);

// 		t_list *newbuble1;
// 		char *newbuble1_content = "Coucou";

// 		// Allouer de la mémoire pour newbuble1
// 		newbuble1 = ft_lstnew(newbuble1_content);
// 		if (newbuble1)
// 		{
// 			ft_lstadd_back(&node, newbuble1);
// 			printf(">> next cont aft add: %s\n", (char *)node->next->content);
// 			printf(">> next after add: %p\n", (void *)node->next);
// 			printf(">>>>> Taille : %i\n", ft_lstsize(node));
// 			printf(">>>>> Last : %s\n", (char *)ft_lstlast(node)->content);

// 		}
// 		else
// 		{
// 			printf("Failed to create newbuble1\n");
// 		}
// 	}
// 	else
// 	{
// 		printf("Failed to create node\n");
// 	}

// 	// Libérer la mémoire allouée
// 	free(node);
// 	return 0;
// }
