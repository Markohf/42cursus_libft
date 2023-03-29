/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:26:13 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/22 18:02:28 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies n bytes from src to dst.
 * If dst and src overlap, behavior is undefined.
 * Retorna un puntero a dst.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	if (!dst && !src)
		return (dst);
	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	unsigned int		i = 0;
	unsigned int		n = 2;
	char				dst_ft[] = "HOLA";
	char				src_ft[] = "CHAU";
	char				dst_na[] = "HOLA";
	char				src_na[] = "CHAU";

	ft_memcpy(dst_ft, src_ft, n);
	write(1, "ft_memcpy: ", 11);
	while (i < n)
	{
		write(1, &dst_ft[i], 1);
		i++;
	}
	write(1, "\n", 1);
	memcpy(dst_na, src_na, n);
	write(1, "memcpy: ", 8);
	i = 0;
	while (i < n)
	{
		write(1, &dst_na[i], 1);
		i++;
	}
	return (0);
}*/
