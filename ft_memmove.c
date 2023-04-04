/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marvin@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:58:36 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 14:56:40 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies "n" bytes from "src" to "dst".
 * The difference with ft_memcpy is that ft_memmove can handle overlaps.
 * Returns a pointer to "dst".*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	if (!dst && !src)
		return (dst);
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
			p_dst[n] = p_src[n];
	}
	return (dst);
}
/*
int	main(void)
{
	size_t	i = 0;
	size_t	n = 4;
	char	dst_r[] = "ABCDEF";
	char	src_r[] = "123456";
	char	dst_m[] = "abcdef";
	char	src_m[] = "123456";

	printf("Real:\t%s\n", memcpy(dst_r, src_r, n));	
	printf("Markoh:\t%s\n", memcpy(dst_m, src_m, n));
	return (0);
}*/
