/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:19:50 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/07 13:37:04 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isascii(int c)
{
	printf ("c = %d\n", c);
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*try;

	(void)argc;
	try = argv[1];
	if (ft_isascii(*try))
		printf ("OK");
	else
		printf ("NOK");
	return (0);
}
