/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:14:54 by salhali           #+#    #+#             */
/*   Updated: 2024/11/21 13:15:29 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int nbr, char *format, int *len)
{
	unsigned int	n;

	n = (unsigned int)nbr;
	if (n >= 16)
		ft_puthex(n / 16, format, len);
	ft_putchar(format[n % 16], len);
}