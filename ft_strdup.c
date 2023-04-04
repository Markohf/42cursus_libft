/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:43:18 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/31 14:06:35 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates sufficient memory for a copy of the string "s",
 * does the copy, NULL terminate it, and returns a pointer to
 * the memory created.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*buff;
	int		len;
	int		i;

	len = ft_strlen(s) + 1;
	buff = malloc(len);
	i = 0;
	if (!buff)
		return (NULL);
	ft_strlcpy(buff, s, len);
	return (buff);
}
/*
int	main(void)
{
	char	text[] = "";

	printf("Real:\t%s\n", strdup(text));
	printf("Markoh:\t%s\n", ft_strdup(text));
	printf("Real:\t%p\n", strdup(text));
	printf("Markoh:\t%p\n", ft_strdup(text));
	return (0);
}*/
