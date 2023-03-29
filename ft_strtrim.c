/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:56:25 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/27 13:38:14 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

# include <string.h>
# include <strings.h>
# include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rpd;

	if (!s1 || !set)
		return (NULL);
/*	if (!set)
		return (ft_strdup(s1));*/
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	rpd = ft_substr(s1, start, end + 1 - start);
	printf("s:'%s'" ,rpd);
	return (rpd);
}

int	main(void)
{
	char	text[] = "123123";
	char	set[] = "123";

	printf("%s", ft_strtrim(text, set));
	return (0);
}
