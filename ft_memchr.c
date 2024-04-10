/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:53:42 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/19 13:53:01 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*mem_strchr(unsigned char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return (&s[i]);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*rep;
	unsigned char	*str;

	str = (unsigned char *)s;
	rep = mem_strchr(str, c);
	if ((size_t)(rep - str) >= n)
		return (NULL);
	else
		return ((void *)rep);
}
