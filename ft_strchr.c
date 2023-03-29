/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:44:42 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/27 13:13:46 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Look for char "c" in the string "s".
 * If "c = 0", then returns a pointer to "s".
 * If doesn´t find "c", then returns "NULL".*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p_s;
	char	c_c;

	p_s = (char *)s;
	c_c = (char)c;
	while (*p_s)
	{
		if (*p_s == c_c)
			return (p_s);
		p_s++;
	}
	if (c_c == 0)
		return (p_s);
	return (NULL);
}
