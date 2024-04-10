/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:01:12 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 13:13:26 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	if (!needle)
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (0);
	i = 0;
	while (haystack[i] && i < len)
	{
		b = 0;
		if (haystack[i] == needle[b])
		{
			while ((needle[b] == haystack[b + i]) && (needle[b] != '\0'))
			{
				if (needle[b] == '\0')
					return ((char *)&haystack[i]);
				b++;
			}
		}
		i++;
	}
	return (0);
}
