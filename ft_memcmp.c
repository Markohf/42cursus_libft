/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:10:25 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/17 15:25:03 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	unsigned int	i;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (p_s1[i - 1] - p_s2[i - 1]);
}
/*
int	main(void)
{
	char			text1[] = "Hola";
	char			text2[] = "Holbs";
	unsigned int	n = 10;

	printf("Markoh:\t%d\n", ft_memcmp(text1, text2, n));
	printf("Real:\t%d\n", memcmp(text1, text2, n));
	return (0);
}*/
