/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:17:48 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 19:24:18 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	rep;

	i = 0;
	while (s1[i] != 0 && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	rep = (s1[i] - s2[i]);
	return (rep);
}
