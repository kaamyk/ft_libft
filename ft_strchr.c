/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:19:44 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/10 10:53:20 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*buf;

	buf = (char *) s;
	while (*buf)
	{
		if (*buf == c)
			return (buf);
		buf++;
	}
	if (c == 0)
		return (buf);
	return (NULL);
}

int main(void)
{
	char str[] = "Les amis de 42";
	char str1[] = "Les amis de 42";
	
	printf ("%s\n", ft_strchr(str, 0));
	printf ("%s\n", strchr(str1, 0));
	return (0);
}
