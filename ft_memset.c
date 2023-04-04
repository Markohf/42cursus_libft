/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:51:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 14:39:40 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes "n" bytes of value "c" (converted to an unsigned char)
 * to the string "s".
 * Returns the modified "s".*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_s;

	i = 0;
	p_s = s;
	while (i < n)
	{
		p_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int		i = 0;
	int		n = 5;
	char	c = 'r';
	char	b_r[] = "HOLA COMO ESTAS";
	char	b_m[] = "hola como estas";

	printf("Real:\t%s\n", memset(b_r, c, len));
	printf("Markoh:\t%s\n", ft_memset(b_m, c, len));
	return (0);
}*/
