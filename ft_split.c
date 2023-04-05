/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:31:07 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/05 15:53:45 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Separates a string using "c" as a separator,
 * then allocates each word in a new direction.
 * Returns an array with the directions to each word.*/

#include "libft.h"

/*Counts the number of times that "c" occurs.
 * If more than one "c" are together, they count as one.*/
static size_t	ft_countchar(char const *s, char c)
{
	size_t	i;
	size_t	cc;

	i = 0;
	cc = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			cc++;
		}
	}
	return (cc);
}

/*Calculates the number of words.*/
static size_t	ft_countwords (char const *s, char c)
{
	size_t	end;
	size_t	cw;

	end = ft_strlen(s) - 1;
	if (s[0] == c && s[end] == c)
		cw = ft_countchar(s, c) - 1;
	else if (s[0] == c || s[end] == c)
		cw = ft_countchar(s, c);
	else if (s[0] != c && s[end] != c)
		cw = ft_countchar(s, c) + 1;
	else
		cw = 0;
	return (cw);
}

/*Separates the words.*/
char	**ft_split(char const *s, char c)
{
	char	**buff;
	size_t	size;
	size_t	i;
	size_t	n;

	size = ft_countwords(s, c);
	i = 0;
	buff = (char **)malloc(sizeof (char *) * size);
	if (!buff)
		return (NULL);
	while (i < size)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			n = strlen(s) - strlen(ft_strchr(s, c));
			buff[i] = ft_substr(s, 0, n);
			s += n;
		}
		i++;
	}
	return (buff);
}

int	main(void)
{
	char 	text[] = "hola,pepe,paco,juan";
	char	c = ',';
	size_t	i = 0;
	size_t	n = 4;
	char	**p = ft_split(text, c);
 
	while (i > n)
		printf("%s\n", p[i]);
	return (0);
}
