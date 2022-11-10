/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:52 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/08 14:37:09 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	printf ("i == %ld\n", i);
	j = i;
	while (i < size - 1 && src[i - j])
	{
		printf ("i == %ld\n", i);
		dst[i] = src[i - j];
		i++;
	}
	dst[i] = '\0';
	return (j + src_len);
}

int	main(void)
{
	char	src[] = "PIPE !";
	char	dest[16] = "Nom d'une ";
	char	src1[] = "PIPE !";
	char	dest1[16] = "Nom d'une ";
	size_t 	i;

	i = 0;
	printf("%ld\n", ft_strlcat(dest, src, 16));
	while (dest[i])
	{
		printf("%c", dest[i]);
		//printf("i = %ld\n", i);
		i++;
	}
	printf("\n");
	i = 0;
	printf("%ld\n", strlcat(dest1, src1, 16));
	while (dest[i])
	{
		printf("%c", dest1[i]);
		//printf("i = %ld\n", i);
		i++;
	}
	
	return (0);
}
