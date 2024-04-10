/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:34:08 by hle-roi           #+#    #+#             */
/*   Updated: 2023/10/16 13:11:09 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sep(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *str)
{
	int		i;
	char	*cpy;

	i = 0;
	while (str[i] != '\0')
		i++;
	cpy = malloc((i + 1) * sizeof(int));
	i = 0;
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

void	ft_modif(int *ijkl, char **array, char *str, char *charset)
{
	int		count;
	char	*s;

	count = 0;
	while (str[ijkl[0]])
	{
		while (ft_is_sep(charset, str[ijkl[0]]) != 1 && str[ijkl[0]])
		{
			ijkl[0]++;
			count++;
		}
		ijkl[2] = 0;
		s = malloc((ft_strlen(str) + 1) * sizeof(char));
		while (count > 0)
		{
			s[ijkl[2]++] = str[ijkl[1]++];
			count--;
		}
		s[ijkl[2]] = '\0';
		while (ft_is_sep(charset, str[ijkl[0]]) == 1)
			ijkl[0]++;
		if (ft_strcpy(s)[0] != '\0')
			array[ijkl[3]++] = ft_strcpy(s);
		ijkl[1] = ijkl[0];
	}
}

char	**ft_split(char *str, char *charset)
{
	int		ijkl[4];
	char	**array;

	ijkl[0] = 0;
	ijkl[1] = 0;
	ijkl[2] = 0;
	ijkl[3] = 0;
	array = malloc((ft_strlen(str) + 1) * sizeof(char *));
	ft_modif(ijkl, array, str, charset);
	array[ijkl[3]] = 0;
	return (array);
}
