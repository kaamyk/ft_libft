/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:46:55 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/07 13:56:25 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && (c < '0' || c > '9'))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*try;

	(void)argc;
	try = argv[1];
	if (ft_isalnum(*try))
		printf("OK");
	else
		printf("NOK");
	return (0);
}
