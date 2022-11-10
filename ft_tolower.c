/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:07:35 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/09 11:17:04 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	else
		return (c);
}

int	main(void)
{
	char	str[] = "BONJOUR";
	char	str1[] = "BONJOUR";
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		printf("%c", str[i]);
		i++;
	}
	printf ("\n");
	i = 0;
	while (str1[i])
	{
		str1[i] = tolower(str1[i]);
		printf("%c", str1[i]);
		i++;
	}
	return (0);
}
