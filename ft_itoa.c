/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:46:17 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 18:00:36 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(unsigned int c)
{
	static int	count = 0;

	while (c > 0)
	{
		count++;
		c = c / 10;
	}
	return (count);
}

static char	*ft_rev(char *s, int min)
{
	int		i;
	int		a;
	char	temp;

	if (min == 1)
	{
		i = 1;
		a = ft_strlen(s) - 1;
	}
	else
	{
		i = 0;
		a = ft_strlen(s) - 1;
	}
	while (i < a)
	{
		temp = s[i];
		s[i] = s[a];
		s[a] = temp;
		i++;
		a--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		min;

	min = 0;
	if (n < 0)
	{
		n *= -1;
		min++;
	}
	str = malloc(ft_count(n) + 2 * sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	if (min == 1)
		str[count++] = '-';
	if (n == 0)
		str[count++] = '0';
	while ((unsigned int)n > 0)
	{
		str[count++] = ((unsigned int)n % 10) + 48;
		n = (unsigned int)n / 10;
	}
	str[count] = 0;
	return (ft_rev(str, min));
}
