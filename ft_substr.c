/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:55:21 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/27 13:29:33 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	dst = malloc(sizeof (char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
/*
int	main(void)
{
	char		text[] = "hola";
	size_t		var = 0;
	size_t		len = 5;
	char		*p = ft_substr(text, var, len);
	size_t		i = 0;
	
	printf("%d\n", ft_strlen(p));
	printf("%p\n", p);
	while (p[i] != '\0')
	{
		write(1, &p[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(p);
	return (0);
}*/
