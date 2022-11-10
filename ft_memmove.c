/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:22:44 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/10 14:04:49 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d_buf;
	const char	*s_buf;

	d_buf = (char *) dest;
	s_buf = (const char *) src;
	if (d_buf > s_buf)
	{
		while (n > 0)
		{
			d_buf[n - 1] = s_buf[n - 1];
			n--;
		}
	}
	else
	{
		while (n)
		{
			*d_buf = *s_buf;
			d_buf++;
			s_buf++;
			n--;
		}
	}
	return (dest);
}

int	main(void)
{
	 char	dest[100] = "Nom d'une ";
	 char	dest1[100] = "Nom d'une ";
	 char	src[] = "PIPE !";
	 char	src1[] = "PIPE !";

	 ft_memmove(dest, src, 5);
	 printf("%s\n", dest);
	 memmove(dest1, src1, 5);
	 printf("%s\n", dest1);
}
