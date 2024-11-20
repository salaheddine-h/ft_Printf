/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:39:12 by salhali           #+#    #+#             */
/*   Updated: 2024/11/18 18:36:16 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr((n / 10), len);
	ft_putchar((n % 10 + '0'), len);
}



void	ft_putunbr(int nbr, int *len)
{
	unsigned int	n;

	n = (unsigned int)nbr;
	if (n >= 10)
		ft_putunbr(n / 10, len);
	ft_putchar((n % 10 + '0'), len);
}




void	ft_puthex(int nbr, char *format, int *len)
{
	unsigned int	n;

	n = (unsigned int)nbr;
	if (n >= 16)
		ft_puthex(n / 16, format, len);
	ft_putchar(format[n % 16], len);
}
static void	to_hex(unsigned long add, char *format, int *len)
{
	if (add >= 16)
		to_hex(add / 16, format, len);
	ft_putchar(format[add % 16], len);
}

void	ft_putadd(void *p, int *len)
{
	unsigned long	add;

	add = (unsigned long)p;
	if (add == 0)
		ft_putstr("(nil)", len);
	else
	{
		ft_putstr("0x", len);
		to_hex(add, "0123456789abcdef", len);
	}
}
