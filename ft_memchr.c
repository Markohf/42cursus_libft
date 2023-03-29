/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:10:25 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/17 13:13:34 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*p_s;
	unsigned char	c_c;

	p_s = (unsigned char *)s;
	c_c = (unsigned char)c;
	while (n)
	{
		if (*p_s == c_c)
			return (p_s);
		p_s++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const void		*text = calloc(0, 0);
	char			c = 0;
	unsigned int	n = 2;

	printf("Markoh:\t%p\n", ft_memchr(text, c, n));
	printf("Real:\t%p\n", memchr(text, c, n));
	return (0);
}*/
