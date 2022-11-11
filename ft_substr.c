/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:08:18 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/11 16:40:06 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*n_str;
	size_t		i;
	size_t		j;

	n_str = malloc (sizeof(char) * len);
	if (!n_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < start)
		i++;
	while (j < len && s[i + j])
	{
		n_str[j] = s[i + j];
		j++;
	}
	n_str[len] = 0;
	return (n_str);
}
