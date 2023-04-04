/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:26:13 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 14:58:54 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies "n" bytes from "src" to "dst".
 * If "dst" and "src" overlap, behavior is undefined.
 * Returns a pointer to "dst".*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
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
	size_t	i = 0;
	size_t	n = 2;
	char	dst_r[] = "HOLA";
	char	src_r[] = "CHAU";
	char	dst_m[] = "hola";
	char	src_m[] = "chau";

	printf("Real:\t%s\n", memcpy(dst_r, src_r, n));
	printf("Markoh:\t%s\n", ft_memcpy(dst_r, src_r, n));
	return (0);
}*/
