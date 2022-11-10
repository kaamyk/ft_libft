/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:39:53 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/10 11:53:18 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*buf;

	i = 0;
	buf = (char *)s;
	while (i < n)
	{
		buf[i] = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char str[] = "123456";
	char str1[] = "123456";
	int arr[6] = {1,2,3,4,5,6};
	int arr1[6] = {1,2,3,4,5,6};
	char r1 = '9';
	int r2 = 9;
	int	i;

	i = 0;
	ft_memset(str, r1, sizeof(char) * 4); 
	ft_memset(arr, r2, sizeof(int) * 2); 
	while (i < 6)
	{
		printf("%c",str[i]);
		i++;
	}
	memset(str1, r1, sizeof(char) * 4);
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("%c",str1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("\n");
		printf("%d",arr[i]);
		i++;
	}
	memset(arr1, r2, sizeof(int) * 2);
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("\n");
		printf("%d",arr1[i]);
		i++;
	}
	return (0);
}*/
