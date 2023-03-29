/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:28:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/13 17:30:06 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
