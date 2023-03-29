/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:51:26 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/13 17:26:10 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, unsigned int len)
{
	unsigned int	i;
	char			*p_b;

	i = 0;
	p_b = b;
	while (i < len)
	{
		p_b[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	unsigned int		i = 0;
	unsigned int		len = 4;
	char				b_ft[] = "HOLA";
	char				b_na[] = "CHAU";

	ft_bzero(b_ft, len);
	write(1, "ft_bzero: ", 10);
	while (i < len)
	{
		write(1, &b_ft[i], 1);
		i++;
	}
	write(1, "\n", 1);
	bzero(b_na, len);
	write(1, "bzero: ", 7);
	i = 0;
	while (i < len)
	{
		write(1, &b_na[i], 1);
		i++;
	}
	return (0);
}*/
