/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:50:20 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 19:24:40 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	if (dstsize < ft_strlen(src))
		return (0);
	if (dstsize == 0)
		return (0);
	count = 0;
	while (--dstsize)
	{
		if (*src)
			*(dst)++ = *(src)++;
		else
			break ;
		count++;
	}
	*dst = 0;
	return (count);
}
