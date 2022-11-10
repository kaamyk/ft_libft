/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:57:22 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/08 18:23:58 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*buf;

	i = 0;
	buf = (char *)s;
	while (i < n)
	{
		buf[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	str[] = "123456";
	char	str1[] = "123456";
	int	i;

	ft_bzero(str, sizeof(char) * 2);
	bzero(str1, sizeof(char) * 2);

	i = 0;
	while (i < 6)
	{
		printf ("%d", str[i]);
		i++;
	}
	printf ("\n");
	i = 0;
	while (i < 6)
	{
		printf ("%d", str1[i]);
		i++;
	}
	return (0);	
}
