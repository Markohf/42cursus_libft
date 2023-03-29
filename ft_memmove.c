/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marvin@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:58:36 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/22 18:15:55 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies len bytes from string src to string dst.
 * The difference with ft_memcpy is that ft_memmove can handle overlaps.
 * Returns a pointer to dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	unsigned int		i;

	if (!dst && !src)
		return (dst);
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (len--)
			p_dst[len] = p_src[len];
	}
	return (dst);
}
/*
int	main(void)
{
	unsigned int		i = 0;
	unsigned int		n = 4;
	char				dst_ft[] = "ABCDEF";
	char				src_ft[] = "123456";
	char				dst_na[] = "ABCDEF";
	char				src_na[] = "123456";

	ft_memmove(dst_ft, src_ft, n);
	write(1, "ft_memmove: ", 12);
	while (i < n)
	{
		write(1, &dst_ft[i], 1);
		i++;
	}
	write(1, "\n", 1);
	memmove(dst_na, src_na, n);
	write(1, "memmove: ", 9);
	i = 0;
	while (i < n)
	{
		write(1, &dst_na[i], 1);
		i++;
	}
	return (0);
}*/
