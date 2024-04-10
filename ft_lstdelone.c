/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:54:47 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/17 18:57:09 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void	*))
{
	t_list	*tmp;

	if (alst == NULL || del == NULL)
		return ;
	tmp = *alst;
	del(tmp->content);
	free(tmp);
	*alst = NULL;
}
