/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:27:04 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/08 12:39:34 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes the string "s" into the file identify by the file descriptor "fd".*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
