/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:12:31 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/25 20:54:59 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Creates a new string concatenating "s1" and "s2".*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new;

	size = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	ft_strlcpy(new + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (new);
}
/*
int	main(void)
{
	char	s1[] = "Hola ";
	char	s2[] = "como estas";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
