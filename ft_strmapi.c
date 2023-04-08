/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:54:44 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/07 22:32:55 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Runs the function "f" in each char of "s".
 * Creates a new string with the results.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buff;

	if (!s)
		return (NULL);
	i = 0;
	buff = ft_calloc(ft_strlen(s) + 1, sizeof (char));
	if (!buff)
		return (NULL);
	while (s[i] != '\0')
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
