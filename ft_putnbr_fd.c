/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:00:23 by marco-fe          #+#    #+#             */
/*   Updated: 2023/04/08 14:52:17 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes the int "n" into the file identify by the file descriptor fd.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		n *= -1;
		write(fd, "-", 1);
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
