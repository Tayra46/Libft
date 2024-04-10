/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:16:28 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/14 13:21:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int	main(void)
{
	char	str[50];

	printf("%s\n", (char *)ft_memset(str, '$', 15));
	ft_bzero(str, 15);
	printf("%s", str);
	return (0);
}
