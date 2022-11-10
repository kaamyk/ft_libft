/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:38:29 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/09 11:03:07 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d_buf;
	const char	*s_buf;
	size_t		i;

	d_buf = (char *) dest;
	s_buf = (const char *) src;
	i = 0;
	while (i < n)
	{
		d_buf[i] = s_buf[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dest[30] = "Nom d'une ";
	char dest1[30] = "Nom d'une ";
	//char src[] = "PIPE !";
	//char src1[] = "PIPE !";

	ft_memcpy(dest + 2, dest1, 8);
	printf("%s\n", dest);
	memcpy(dest1 + 2, dest1, 4);
	printf("%s\n", dest1);
	return (0);
}
