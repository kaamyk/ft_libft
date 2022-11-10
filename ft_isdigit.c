/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:36:05 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/07 11:53:15 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*try;

	(void)argc;
	try = argv[1];
	if (ft_isdigit(*try))
		printf ("OK");
	else
		printf ("NOK");
	return (0);
}
