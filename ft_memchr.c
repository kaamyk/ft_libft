/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:08:42 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/09 14:38:29 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
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

int main(void)
{
    char	str[] = "Les amis de 42";
    char	str1[] = "Les amis de 42";
	void	*tmp;
	void	*tmp1;

	tmp = ft_memchr(str, 'e', 10);
	tmp1 = memchr(str1, 'e', 10);
	
    printf ("ft_memchr = %s\n", (char *)tmp);
    printf ("memchr = %s\n", (char *)tmp1);
    return (0);
}

