/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:22:56 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/09 11:00:31 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

int	main(void)
{
	char	str[] = "Nom d'une";
	char	str1[] = "Nom d'une";
	int		i;

	i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		str[i] = ft_toupper(str1[i]);
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("%s\n", str1);
	while (str[i])
	{
		str1[i] = toupper(str1[i]);
		printf("%c", str1[i]);
		i++;
	}

}
