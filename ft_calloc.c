/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:18:42 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/05 13:47:33 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserves clean memory space for "count" * "size" bytes.*/

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	tot;
	void			*buff;

	tot = count * size;
	buff = malloc(tot);
	if (!buff)
		return (NULL);
	ft_bzero(buff, tot);
	return (buff);
}
