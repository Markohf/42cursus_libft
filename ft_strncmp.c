/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marvin@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:16:49 by marco-fe          #+#    #+#             */
/*   Updated: 2023/03/30 12:33:51 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares "n" bytes of "s1" and "s2". If finds a difference, returns
 * "p_s1[i]" - "p_s2[i]" (p_ because of the pointers). Otherwise there are
 * no difference, so returns 0.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (p_s1[i] != '\0' || p_s2[i] != '\0'))
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	text1[] = "Hola";
	char	text2[] = "Holbs";
	size_t	n = 3;

	printf("Real:\t%d\n", strncmp(text1, text2, n));
	printf("Markoh:\t%d\n", ft_strncmp(text1, text2, n));
	return (0);
}*/
