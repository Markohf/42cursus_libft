/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:16:09 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/25 18:58:03 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	len_dst;
	size_t	i;
	size_t	end;

	len_dst = ft_strlen(dst);
	i = 0;
	end = ft_strlen(src);
	if (len <= len_dst)
		end += len;
	else
		end += len_dst;
	while (src[i] && len_dst + i + 1 < len)
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
	size_t		len = 20;
	size_t		i = 0;
  
	printf("Real:\t%lu\n", strlcat(dst1, src, len));
	write(1, "Real:\t", 6);
	while (dst1[i] != '\0')
	{
		write(1, &dst1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	printf("Markoh:\t%lu\n", ft_strlcat(dst2, src, len));
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
