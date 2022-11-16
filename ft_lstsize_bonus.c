/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:42 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/15 20:48:04 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
