/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:19:26 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/17 12:13:04 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;

	if (dst == src || n == 0)
		return (dst);
	pdst = (char *)dst;
	psrc = (char *)src;
	while (--n)
		*(pdst)++ = *(psrc)++;
	*pdst = *psrc;
	return (dst);
}
