/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:45:13 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/19 15:14:45 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long int	neg;
	long int	nb;
	long int	prev;
	size_t		i;

	neg = 1;
	nb = 0;
	i = 0;
	prev = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1 * neg;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		prev = nb;
		nb = nb * 10 + (str[i++] - '0');
		if (prev > nb)
			return (1 * (neg == -1));
	}
	return (nb * neg);
}
