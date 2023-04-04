/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 13:21:41 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If "val" is a digit, returns 1; otherwise, returns 0.*/

#include "libft.h"

int	ft_isdigit(int val)
{
	if (val >= '0' && val <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	val;

	val = '1';
	printf("ft_isdigit: %i\n", ft_isdigit(val));
	printf("isdigit: %i\n", isdigit(val));
	return (0);
}*/
