/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:14:49 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/17 15:16:51 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

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

int	ft_slen(char const *s, const char *buf)
{
	int	len;

	len = 0;
	while (s != buf)
	{
		s++;
		len++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*n_str;
	const char	*buf;
	int			i;

	i = 0;
	while (ft_char_in_set(*s1, set))
		s1++;
	buf = s1;
	while (*(buf + 1))
		buf++;
	while (ft_char_in_set(*buf, set) && buf >= s1)
		buf--;
	printf("\nft_slen = %d\n", ft_slen(s1, buf));
	printf("len = %ld\n", buf - s1 + 2);
	n_str = malloc(sizeof(char) * (buf - s1 + 2));
	if (!n_str)
		return (NULL);
	while (s1 <= buf)
	{
		n_str[i] = *s1;
		i++;
		s1++;
	}
	*(n_str + i) = 0;
	return (n_str);
}
