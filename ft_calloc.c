/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:23:10 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/15 12:05:57 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;

	if (!size && nmemb != size * nmemb / size)
		return (NULL);
	buf = malloc(nmemb * size);
	if (!buf)
		return (NULL);
	ft_memset(buf, 0, nmemb * size);
	return (buf);
}
