/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:31:07 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/07 19:12:09 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Separates a string using "c" as a separator,
 * then allocates each word in a new direction.
 * Returns an array with the directions to each word.*/

#include "libft.h"

/*Counts the number of times that "c" occurs.
 * If more than one "c" are together, they count as one.*/
static size_t	sft_countchar(char const *s, char c)
{
	size_t	i;
	size_t	cch;

	i = 0;
	cch = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			cch++;
		}
		else
			i++;
	}
	return (cch);
}

/*Calculates the number of words.*/
static size_t	sft_countwords(char const *s, char c)
{
	size_t	end;
	size_t	cw;

	if (c == 0)
		return (1);
	if (*s == '\0')
		return (0);
	end = ft_strlen(s) - 1;
	if (s[0] == c && s[end] == c)
		cw = sft_countchar(s, c) - 1;
	else if (s[0] == c || s[end] == c)
		cw = sft_countchar(s, c);
	else
		cw = sft_countchar(s, c) + 1;
	return (cw);
}

/*Calculates the len of each word.*/
static size_t	sft_lenword(char const *s, char c)
{
	char	*pre;
	size_t	lw;

	pre = ft_strchr(s, c);
	if (pre != NULL)
		lw = pre - s;
	else
		lw = ft_strlen(s);
	return (lw);
}

/*Separates the words.*/
char	**ft_split(char const *s, char c)
{
	char	**buff;
	size_t	size;
	size_t	i;
	size_t	n;

	if (!s)
		return (NULL);
	size = sft_countwords(s, c);
	i = 0;
	buff = (char **)ft_calloc(size + 1, sizeof (char *));
	if (!buff)
		return (NULL);
	while (i++ < size)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			n = sft_lenword(s, c);
			buff[i - 1] = ft_substr(s, 0, n);
			s += n;
		}
	}
	return (buff);
}
/*
int	main(void)
{
	char 	text[] = "";
	char	c = 97;
	char	**p = ft_split(text, c);
 
	while (p && *p != NULL)
	{
		printf("%s\n", *p);
		free(*p);
		p++;
	}
	return (0);
}*/
