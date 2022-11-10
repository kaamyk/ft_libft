/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:30:00 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/09 16:54:29 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b_buf;
	int	i;

	b_buf = (char *) big;
	if (*little == 0)
		return (b_buf);
	while (*b_buf)
	{
		i = 0;
		while (*(b_buf + i) == *(little + i))
		{
			if (!*(little + i + 1))
				return (b_buf);
			i++;
		}
		b_buf++;
	}
	return (NULL);
}

int	main(void)
{
	const char	str[] = "Bonjourles copains";
	const char	str1[] = "cop";
	char	*result;
	char	*result1;
	
	result = ft_strnstr(str,str1, 15);
	result1 = strnstr(str,str1, 15);
	printf("%s\n", result);
	printf("%s\n", result1);
	return (0);
}
