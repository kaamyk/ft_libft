/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:46:23 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/11 16:48:31 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_wdcount(char const *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	res = malloc(sizeof(char *) * ft_wdcount(s, c));
	while (*s)
	{
		if (*(s + i) == c || !*(s + i))
		{
			*res = malloc(sizeof(char) * i);
			if (!*res)
				return (NULL);
			ft_strlcpy(*res, s, i);
			res++;
			s += i;
			i = 0;
		}
		i++;
	}
	return (res);
}
