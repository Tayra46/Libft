/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:08:32 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/12 14:44:03 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*rep;
	const char	*str;

	str = (const char *)s;
	rep = ft_strchr(str, c);
	if (rep - str >= n || rep == NULL)
		return (NULL);
	else
		return (rep);
}
