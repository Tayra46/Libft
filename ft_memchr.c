/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:53:42 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 18:53:44 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*mem_strchr(const unsigned char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			break ;
		s++;
	}
	return ((unsigned char *)s);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*rep;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	rep = mem_strchr(str, c);
	if ((size_t)(rep - str) >= n || rep == NULL)
		return (NULL);
	else
		return (rep);
}
