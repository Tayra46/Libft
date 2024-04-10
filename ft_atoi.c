/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:45:13 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 19:42:00 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long int	i;
	long int	rep;
	long int	min;
	long int	last;

	i = 0;
	min = 0;
	rep = 0;
	if (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		min = (str[i++] == '-');
	while (str[i] && str[i] <= '9')
	{
		last = rep;
		rep = rep * 10 + (str[i++] - 48);
		if (rep < last)
			return (-1 * min);
	}
	return (rep * (min == 0) - rep * (min > 0));
}
