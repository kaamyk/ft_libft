/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:23:10 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/10 13:51:19 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;
	
	if (size == SIZE_MAX)
		return (NULL);
	buf = malloc(nmemb * size);
	if (!buf)
		return (NULL);
	ft_memset(buf, 0, nmemb * size);
	return (buf);
}

int		main(void)
{
	char			*str;
	char			*str1;
	size_t		i;
	int			j;

	str1 = calloc(4, sizeof(char));
	str = ft_calloc(4, sizeof(char));

	i = 0;
	j = 0;
	while (i <= 4 - 1)
	{
		str1[i] = j + 1;
		str[i] = j + 1;
		i++;
		j++;
	}
	i = 0;
	while (str[i])
	{
		printf("str[%ld] = %d\n", i, str[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (str1[i])
	{
		printf("str1[%ld] = %d\n", i, str1[i]);
		i++;
	}
}
