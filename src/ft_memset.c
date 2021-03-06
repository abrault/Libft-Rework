/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 18:26:16 by abrault           #+#    #+#             */
/*   Updated: 2014/04/14 18:26:17 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (len)
	{
		p = b;
		while (i < len)
		{
			p[i] = c;
			i++;
		}
	}
	return (b);
}
