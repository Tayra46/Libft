/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:14:29 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 15:23:46 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	a;
	unsigned int	k;

	str = malloc(ft_strlen(s1) + 1 * sizeof(char));
	i = 0;
	while (ft_isset(s1[i], set))
		i++;
	a = ft_strlen(s1) - 1;
	while (ft_isset(s1[a], set))
		a--;
	k = 0;
	while (i <= a)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = 0;
	return (str);
}
