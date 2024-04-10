/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:14:48 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/12 14:43:23 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*rep;

	rep = NULL;
	while (*s)
	{
		if (*s == c)
			rep = (unsigned char *)s;
		s++;
	}
	return ((char *)rep);
}
