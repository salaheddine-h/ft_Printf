/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:15:50 by salhali           #+#    #+#             */
/*   Updated: 2024/11/21 13:45:02 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	to_hex(unsigned long add, char *format, int *len)
{
	if (add >= 16)
		to_hex(add / 16, format, len);
	ft_putchar(format[add % 16], len);
}

void	ft_putadd(void *p, int *len)
{
	unsigned long add;

	add = (unsigned long)p;
	if (add == 0)
		ft_putstr("0x0", len);
	else
	{
		ft_putstr("0x", len);
		to_hex(add, "0123456789abcdef", len);
	}
}