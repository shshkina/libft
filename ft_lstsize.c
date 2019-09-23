/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuolo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:45:02 by iuolo             #+#    #+#             */
/*   Updated: 2019/09/19 01:47:23 by iuolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list **size)
{
	t_list	*cur;
	int		i;

	i = 0;
	cur = *size;
	while (cur)
	{
		cur = cur->next;
		i++;
	}
	return (i);
}
