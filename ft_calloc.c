/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:24:12 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 19:21:03 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	unsigned char	*pp;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	pp = (unsigned char *)p;
	while (count --)
		pp[count] = 0;
	return (p);
}
