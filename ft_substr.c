/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:08:18 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/15 14:46:51 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*n_str;
	unsigned int	slen;
	size_t			i;

	slen = ft_strlen(s);
	n_str = (char *) malloc (sizeof(char) * slen + 1);
	i = 0;
	if (start > slen)
	{
		n_str[i] = 0;
		return (n_str);
	}
	if (!n_str)
		return (NULL);
	while (len && s[start + i])
	{
		n_str[i] = s[start + i];
		len--;
		i++;
	}
	n_str[i] = 0;
	return (n_str);
}
