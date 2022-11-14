/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:08:18 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/14 17:35:48 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*n_str;
	unsigned int	slen;
	size_t		i;

	printf("s == %s\n", s);
	printf("start == %d\n", start);
	printf("len == %ld\n", len);
	slen = ft_strlen(s);
	if (start > slen)
	{
		printf("Dans if 1\n");
		n_str = malloc(sizeof(char) * 1);
		*n_str = 0;
		return (n_str);
	}
	printf("Apres le if\n");
	printf("s == %s\n", s);
	printf("malloc == %ld\n", sizeof(char) * (start - slen));
	n_str = malloc ((start - slen));
	if (!n_str)
		return (NULL);
	i = 0;
	while (len && s[start + i])
	{
		printf("start + i == %ld\n", start + i);
		n_str[i] = s[start + i];
		len--;
		i++;
	}
	n_str[i] = 0;
	printf("n_str == %s\n", n_str);
	return (n_str);
}
