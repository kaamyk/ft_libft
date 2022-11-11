/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:08:42 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/11 16:30:02 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buf;
	size_t		i;

	buf = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*buf == c)
			return (buf);
		buf++;
		i++;
	}
	if (c == 0)
		return (buf);
	return (NULL);
}
