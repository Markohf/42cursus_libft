/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 13:21:18 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*If "val" is a letter, returns 1; otherwise, returns 0.*/

#include "libft.h"

int	ft_isalpha(int val)
{
	if ((val >= 'A' && val <= 'Z') || (val >= 'a' && val <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	val;

	val = '-';
	printf("ft_isalpha: %i\n", ft_isalpha(val));
	printf("isalpha: %i\n", isalpha(val));
	return (0);
}*/
