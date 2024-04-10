/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:49:51 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 12:08:08 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	p = malloc(ft_strlen(s1) + 1 * sizeof(char));
	i = 0;
	while (i < ft_strlen(s1))
	{
		p[i] = s1[i];
	}
	p[i] = 0;
	return (p);
}
