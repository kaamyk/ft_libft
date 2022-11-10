/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:53:04 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/09 18:10:01 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
	const char	*tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	dup = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	main(void)
{
	char	*str = "les enfants";
	char	*dup;
	char	*dup1;

	dup = ft_strdup(str);
	dup1 = strdup(str);
	printf("%s\n", dup);
	printf("%s\n", dup1);
}
