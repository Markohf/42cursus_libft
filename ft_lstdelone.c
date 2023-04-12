/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:35:14 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/12 12:03:14 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Frees de content of "lst" and frees the node.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del && lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
