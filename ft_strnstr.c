/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:27:51 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/30 15:05:13 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates the first occurrence of "s" in "n" characters of "d".
 * Characters that appear after a \0 character are not searched.
 * Returns a pointer to the first occurrence; otherwise, returns NULL;
 * unless that "s" is empty; in which case, returns "d".*/

/*I include a second way of solve it, but that way doesn't seg fault
 * when  d = ((void *)0).*/

#include "libft.h"

char	*ft_strnstr(const char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_s;

	i = 0;
	if (*s == 0)
		return ((char *)d);
	len_s = ft_strlen(s);
	while (d[i] != '\0' && len_s <= n)
	{
		j = 0;
		if (d[i] == s[j])
		{
			while (d[i + j] == s[j] && d[i + j] != '\0' && s[j] != '\0')
				j++;
			if (j == len_s)
				return ((char *)d + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *d, const char *s, size_t n)
{
	size_t	len_s;

	if (*s == 0)
		return ((char *)d);
	len_s = ft_strlen(s);
	while (len_s <= n && *d)
	{
		if (*d == *s && ft_strncmp(d, s, len_s) == 0)
			return ((char *)d);
		d++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char			src[] = "como";
	char			dst[] = "Hola como estas";
	int				n = 9;

	printf("Real:\t%p\n", strnstr(dst, src, n));
	printf("Markoh:\t%p\n", ft_strnstr(dst, src, n));
	return (0);
}*/
