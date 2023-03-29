/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:14:43 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/18 15:14:29 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	i;
	int	sign;

	val = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += ((char)str[i] - '0');
		i++;
	}
	return (val * sign);
}
/*
int	main(void)
{
	char	text[] = "  -1234sdfs";

	printf("Real:\t%d\n", atoi(text));
	printf("Markoh:\t%d\n", ft_atoi (text));
	return (0);
}*/
