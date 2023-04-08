/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:59:29 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/07 22:33:18 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts an integer to an array.*/

#include "libft.h"

/*Calculates the size that will be use for the buffer.*/
static size_t	sft_buff(int n, int sign)
{
	size_t	i;

	i = 1;
	if (n == -2147483648)
		return (10);
	n *= sign;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

/*The main function that will convert the integer to an array.*/
char	*ft_itoa(int n)
{
	size_t	size;
	int		sign;
	char	*buff;

	size = 0;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		size++;
	}
	size += sft_buff(n, sign);
	buff = ft_calloc(size + 1, sizeof (char));
	if (!buff)
		return (NULL);
	while (size--)
	{	
		buff[size] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	if (sign < 0)
		buff[0] = '-';
	return (buff);
}
/*
int	main(void)
{
	int	val = -2147483648;

	printf("%s\n", ft_itoa(val));
	return (0);
}*/
