/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:55:21 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/03 17:22:13 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Creates a sub string of "s", of "n" bytes long, starting at "start" and
 * allocates it in a new memory space. Returns a pointer to the new
 * memory direction.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	len_s;
	size_t	size;
	char	*dst;

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= len_s)
		return (ft_strdup(""));
	size = n + 1;
	if (start + n > len_s)
		size = len_s - start + 1;
	dst = malloc(size);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s + start, size);
	return (dst);
}
/*
int	main(void)
{
	char		text[] = "hola";
	size_t		start = 5;
	size_t		len = 4;
	
	printf("%s\n", ft_substr(text, start, len));
	return (0);
}*/
