/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:45:14 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/10 15:14:04 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t		ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!result)
		return(NULL);
	i = 0;
	while (*s1)
	{
		result[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		result[i] = *s2;
		s2++;
		i++;
	}
	result[i] = 0;
	return (result);
}

int		main(void)
{
	char	*str = "Les copains";
	char	*str1 = "de 42";
	char	*n_str;	

	n_str = ft_strjoin(str, str1);
	printf("%s\n", n_str);
	return (0);
}
