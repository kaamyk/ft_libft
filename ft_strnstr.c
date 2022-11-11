/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:30:00 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/11 16:39:14 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b_buf;
	size_t	i;

	b_buf = (char *) big;
	if (*little == 0)
		return (b_buf);
	while (*b_buf)
	{
		i = 0;
		while (*(b_buf + i) == *(little + i) && i < len)
		{
			if (!*(little + i + 1))
				return (b_buf);
			i++;
		}
		b_buf++;
	}
	return (NULL);
}
