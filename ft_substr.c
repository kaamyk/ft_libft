/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:08:18 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/17 14:49:20 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_len(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	slen;

	i = start;
	slen = 0;
	while (*(s + i) && slen < len)
	{
		slen++;
		i++;
	}
	return (slen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*n_str;
	unsigned int	slen;
	size_t			i;

	if (start > ft_strlen(s) || len == 0)
	{
		n_str = malloc(sizeof(char));
		*n_str = 0;
		return (n_str);
	}
	slen = ft_len(s, start, len);
	n_str = malloc (sizeof(char) * (slen + 1));
	i = 0;
	while (len && s[start + i])
	{
		n_str[i] = s[start + i];
		len--;
		i++;
	}
	n_str[i] = 0;
	return (n_str);
}
