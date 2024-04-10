/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:50:20 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/17 16:32:56 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
	{
		while (src[count])
			count++;
		return (count);
	}
	while (count < size - 1 && src[count])
	{
		dst[count] = src[count];
		count++;
	}
	if (count < size)
		dst[count] = '\0';
	while (src[count])
		count++;
	return (count);
}
