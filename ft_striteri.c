/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:56:04 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/07 22:32:12 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Runs the function "f" in each char of "s".*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
