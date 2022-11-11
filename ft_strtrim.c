/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:14:49 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/11 16:39:34 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_char_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*n_str;
	const char	*buf;
	int			i;

	buf = s1;
	i = 0;
	while (ft_char_in_set(*s1, set))
		s1++;
	while (*(buf + 1))
	{
		buf++;
	}
	while (ft_char_in_set(*buf, set))
		buf--;
	n_str = malloc(sizeof(char) * (buf - s1 + 1));
	if (!n_str)
		return (NULL);
	while (s1 <= buf)
	{
		n_str[i] = *s1;
		i++;
		s1++;
	}
	n_str[i] = 0;
	return (n_str);
}
