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
