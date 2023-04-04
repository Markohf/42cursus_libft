/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:16:09 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 16:13:21 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Concatenate "dst" and "src" adding "n" bytes of "src" to "dst".
 * "dst" must have enough space.
 * "n" should be the length of "dst" + "src", so the return will be
 * the length of both string. If "n" is shorter than the length of
 * "dst" (not the size), the return will be "n" + the length of "src".*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len_dst;
	size_t	i;
	size_t	end;

	len_dst = ft_strlen(dst);
	i = 0;
	end = ft_strlen(src);
	if (n <= len_dst)
		end += n;
	else
		end += len_dst;
	while (src[i] && len_dst + i + 1 < n)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (end);
}
/*
int	main(void)
{
	char		dst1[] = "pqrstuvwxyz";
	char		dst2[] = "pqrstuvwxyz";
	const char	src[] = "abcd";
	size_t		n = 20;
	size_t		i = 0;
  
	printf("Real:\t%lu\n", strlcat(dst1, src, n));
	write(1, "Real:\t", 6);
	while (dst1[i] != '\0')
	{
		write(1, &dst1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	printf("Markoh:\t%lu\n", ft_strlcat(dst2, src, n));
	i = 0;
	write(1, "Markoh:\t", 8);
	while (dst2[i] != '\0')
	{
		write(1, &dst2[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
