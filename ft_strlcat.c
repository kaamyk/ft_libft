/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:52 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/14 13:04:21 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t s_dst;
	size_t s_src;

	i = 0;
	j = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (s_dst + i);
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (s_dst + s_src);
}

int	main(void)
{
	char	dst[30];
	char	dst1[30];
	char	*src	= " dans le cluster";
	char	*src1	= " dans le cluster";

	dst[0] = 'T';
	dst1[0] = 'T';
	printf("ft = %ld\n", ft_strlcat(dst, src, 0));
	printf("lcat = %ld\n", strlcat(dst1, src1, 0));
	printf("dst == %s\n", dst);
	printf("dst1 == %s\n", dst1);
}

