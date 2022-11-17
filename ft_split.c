/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 08:59:49 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/17 13:49:19 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_wdcount(const char *s, int c)
{
	int	count;

	count = 1;
	if (!*s)
		return (count);
	while (*s)
	{
		if (*s == c && (*(s + 1) != c && *(s + 1)))
			count++;
		if (!*(s + 1) && count <= 2)
			return (2);
		s++;
	}
	return (count);
}

int	ft_wdlen(const char *s, int c)
{
	int	len;

	len = 0;
	while (*(s + len) != c && *(s + len))
		len++;
	len += 1;
	return (len);
}

void	ft_scat(char **dest, const char **src, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		**dest = **src;
		(*dest)++;
		(*src)++;
		i++;
	}
	**dest = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*tmp;
	int		wlen;
	int		j;

	tab = malloc(sizeof(char *) * ft_wdcount(s, c));
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			wlen = ft_wdlen(s, c);
			tab[j] = malloc(sizeof(char) * wlen);
			tmp = tab[j];
			ft_scat(&tab[j], &s, wlen);
			tab[j] = tmp;
			j++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}
