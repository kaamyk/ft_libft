/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:14:43 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/07 11:51:41 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c != -1 && (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*try;

	(void) argc;
	try = argv[1];
	printf ("try == %d\n", *try);
	if (ft_isalpha(*try))
		printf ("OK");
	else
		printf ("NOK");
	return (0);
}
