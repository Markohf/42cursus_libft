/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:04:29 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/29 15:59:19 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies "n" - 1 bytes of "src" to "dst".
 * Uses "n" - 1 because the "n" byte will be \0.
 * Returns the length of "src".*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
