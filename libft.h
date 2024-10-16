/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:13:45 by edetoh            #+#    #+#             */
/*   Updated: 2024/10/16 16:36:16 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int				ft_atoi(const char *str);
int				ft_strlen(char *str);
void			*ft_memset(void *pointer, int value, size_t count);
void			*ft_memmove(void *dest, const void *src, size_t count);
void			*ft_memcpy(void *dest, const \
				void *src, size_t count);
int				ft_isprint(int nb);
int				ft_isdigit(int nb);
int				ft_isascii(int nb);
int				ft_isalpha(int nb);
int				ft_isalnum(int nb);
void			ft_bzero(void *pointer, size_t count);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlcat(char *dest, char *src, \
				size_t size);
int				ft_tolower(int letter);
int				ft_toupper(int letter);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, size_t len);
char			*ft_strchr(const char *str, int letter);
char			*ft_strrchr(const char *str, int letter);

#endif
