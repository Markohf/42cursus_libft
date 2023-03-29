/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:51:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/13 17:31:18 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	char			*p_b;

	i = 0;
	p_b = b;
	while (i < len)
	{
		p_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	unsigned int		i = 0;
	unsigned int		len = 5;
	void				*b_ft = calloc(len, len);
	void				*b_na = calloc(len, len);

	ft_memset(b_ft, 'A', len);
	write(1, "ft_memset: ", 11);
	while (i < len)
	{
		write(1, &b_ft[i], 1);
		i++;
	}
	write(1, "\n", 1);
	memset(b_na, 'B', len);
	write(1, "memset: ", 8);
	i = 0;
	while (i < len)
	{
		write(1, &b_na[i], 1);
		i++;
	}
	free (b_ft);
	free (b_na);
	return (0);
}*/
