/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:45:13 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/12 14:57:19 by hle-roi          ###   ########.fr       */
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

int	atoi(const char *str)
{
	int	i;
	int	rep;
	int	min;

	i = 0;
	min = 0;
	rep = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		min = 1;
		i++;
	}
	while (str[i])
	{
		rep = rep * 10 + (str[i] - 48);
		i++;
	}
	if (min == 1)
		return (-rep);
	else
		return (rep);
}
