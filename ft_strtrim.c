/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:56:25 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/04 14:27:57 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Creates a new string deleting the characters of "set" from the beginning
 * and the end of "s1" until finds a character that is not in "set".
 * Returns a pointer to the new string.*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rpd;

	if (!s1)
		return (NULL);
	if (!*s1 || !set || !*set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	rpd = ft_substr(s1, start, end + 1 - start);
	return (rpd);
}
/*
int	main(void)
{
	char	text[] = "";
	char	set[] = "45";

	printf("%s", ft_strtrim(text, set));
	return (0);
}*/
