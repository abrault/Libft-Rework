/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 11:19:30 by abrault           #+#    #+#             */
/*   Updated: 2014/04/14 18:36:54 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *b, size_t len);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *str);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, int n);
int		ft_atoi(const char *str);
int		ft_isprint(int c);
int		ft_isascii(int c);

char	*ft_strchr(const char *str, char c);
char	*ft_strstr(const char *str_1, const char *str_2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);

#endif
