/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:37:39 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/07 13:56:45 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*try;

	(void)argc;
	try = argv[1];
	if (ft_isprint(*try))
		printf ("OK");
	else
		printf ("NOK");
	return (0);
}
