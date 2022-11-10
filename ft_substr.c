/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:08:18 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/10 15:24:31 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*n_str;
	size_t		i;
	size_t		j;

	n_str = malloc (sizeof(char) * len);
	if (!n_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < start)
		i++;
	while (j < len && s[i + j])
	{
		n_str[j] = s[i + j];
		j++;
	}
	n_str[len] = 0;
	return (n_str);
}

int	main(void)
{
	char	*str = "Les copains de 42";
	char	*result;

	result = ft_substr(str, 15, 4);
	printf ("result = %s\n", result);
	return (0);
}
