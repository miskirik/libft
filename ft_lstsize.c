/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miskirik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:58:51 by miskirik          #+#    #+#             */
/*   Updated: 2022/01/31 07:18:32 by miskirik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	l;

	l = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		l++;
	}
	return (l);
}
