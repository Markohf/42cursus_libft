/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:39:57 by marco-fe          #+#    #+#             */
/*   Updated: 2023/07/26 11:28:31 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes the string "s" into the file identify by the file descriptor "fd",
 * then inserts a line break.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
