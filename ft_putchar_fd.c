/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marco-fe@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:30:15 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/08 12:23:46 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes "c" into the file identify by the file descriptor "fd".*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
