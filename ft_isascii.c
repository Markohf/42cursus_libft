/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/13 17:29:13 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
