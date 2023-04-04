/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:44:42 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/30 12:17:28 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Looks for the last occurrence of char "c", in the string "s".
 * If "c = 0", then returns a pointer to "s".
 * If doesn't finds "c", then returns "NULL".*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p_s;
	int		len;

	p_s = (char *)s;
	len = ft_strlen(p_s);
	p_s += len;
	if (c == 0)
		return (p_s);
	while (len >= 0)
	{
		if (*p_s == (unsigned char)c)
			return (p_s);
		p_s--;
		len--;
	}
	return (NULL);
}
