/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:18:42 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/20 18:42:36 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	tot;
	char			*buff;

	tot = count * size;
	buff = malloc(tot);
	if (!buff)
		return (NULL);
	ft_bzero(buff, tot);
	return (buff);
}
