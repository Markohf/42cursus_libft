/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:43:18 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/23 11:58:39 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates sufficient memory for a copy of the string "s1",
 * does the copy, and returns a pointer to it.
 * If insufficient memory is available,
 * NULL is returned and errno is set to ENOMEM.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buff;
	int		len;
	int		i;

	len = ft_strlen(s1);
	buff = malloc(len + 1);
	i = 0;
	if (!buff)
		return (NULL);
	buff[len] = '\0';
	while (s1[i] != '\0')
	{
		buff[i] = s1[i];
		i++;
	}
	return (buff);
}
/*
int	main(void)
{
	char	text[] = "";
	int		i = 0;
	char	*pr;
	char	*pm;

	pr = strdup(text);
	pm = ft_strdup(text);
	while (pr[i] != '\0')
	{
		write(1, &pr[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (pm[i] != '\0')
	{
		write(1, &pm[i], 1);
		i++;
	}
	write(1, "\n", 1);
	printf("Real:\t%p\n", strdup(text));
	printf("Markoh:\t%p\n", ft_strdup(text));
	return (0);
}*/
