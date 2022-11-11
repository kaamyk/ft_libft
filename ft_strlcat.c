/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:52 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/11 16:46:29 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	while (i < size - 1 && dst[i])
		i++;
	j = i;
	while (i < size - 1 && src[i - j])
	{
		dst[i] = src[i - j];
		i++;
	}
	dst[i] = '\0';
	return (j + src_len);
}
