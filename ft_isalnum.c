/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 13:18:12 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If "val" is a letter or a digit, then returns 1; otherwise, return 0.*/

#include "libft.h"

int	ft_isalnum(int val)
{
	if ((val >= 'A' && val <= 'Z') || (val >= 'a' && val <= 'z')
		|| (val >= '0' && val <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	val;

	val = '-';
	printf("ft_isalnum: %i\n", ft_isalnum(val));
	printf("isalnum: %i\n", isalnum(val));
	return (0);
}*/
