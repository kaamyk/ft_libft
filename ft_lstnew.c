/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvincen <anvincen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:59:01 by anvincen          #+#    #+#             */
/*   Updated: 2022/11/15 19:02:23 by anvincen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_elm;

	n_elm = malloc (sizeof(t_list));
	n_elm->content = content;
	n_elm->next = NULL;
	return (n_elm);
}
