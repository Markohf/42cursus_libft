/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 14:07:38 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If "val" is part of ascii code (0 to 127, not the extended one),
 * returns 1; otherwise, returns 0.*/

#include "libft.h"

int	ft_isascii(int val)
{
	if (val >= 0 && val <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	val;

	val = 'W';
	printf("ft_isascii: %i\n", ft_isascii(val));
	printf("isascii: %i\n", isascii(val));
	return (0);
}*/
