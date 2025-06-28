/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:11:14 by sramasam          #+#    #+#             */
/*   Updated: 2025/06/28 10:26:16 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"
#include "Libft/libft.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	char	d;

	if (n == 0)
	{
		d = '0';
		write(fd, &d, 1);
		return;
	}
	
	if (n >= 10)
		ft_putunbr_fd(n / 10, fd);
	d = (n % 10) + '0';
	write(fd, &d, 1);
}

void	ft_printhexa_upper(unsigned int n)
{
	char	d;

	if (n == 0)
	{
		d = '0';
		write(1, &d, 1);
		return;
	}

	if (n >= 16)
		ft_printhexa_upper(n / 16);
	d = HEXA_UPPER[n % 16];
	write(1, &d, 1);
}

void	ft_printhexa_lower(unsigned int n)
{
	char	d;

	if (n == 0)
	{
		d = '0';
		write(1, &d, 1);
		return;
	}

	if (n >= 16)
		ft_printhexa_lower(n / 16);
	d = HEXA_LOWER[n % 16];
	write(1, &d, 1);
}

void	ft_ptraddress(unsigned long n)
{
	char	d;

	if (n == 0)
	{
		write(1, "0x0",3);
		return;
	}
	write(1, "0x",2);
	
	if (n >= 16)
		ft_ptraddress(n / 16);
	d = HEXA_LOWER[n % 16];
	write(1, &d, 1);
}