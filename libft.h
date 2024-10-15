/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:13:45 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/15 11:23:06 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int		ft_strlen(char *str);
void	*ft_memset(void *pointer, int value, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t count);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t count);
int		ft_isprint(int nb);
int		ft_isdigit(int nb);
int		ft_isascii(int nb);
int		ft_isalpha(int nb);
int		ft_isalnum(int nb);
void	ft_bzero(void *pointer, size_t count);
int		ft_atoi(const char *str);

#endif
