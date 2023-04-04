/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 14:09:37 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If "val" is part of printable ascii (32 to 126),
 * returns 1; otherwise, returns 0.*/

#include "libft.h"

int	ft_isprint(int val)
{
	if (val >= 32 && val <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	val;

	val = '-';
	printf("ft_isprint: %i\n", ft_isprint(val));
	printf("isprint: %i\n", isprint(val));
	return (0);
}*/
