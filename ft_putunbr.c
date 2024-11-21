/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:13:50 by salhali           #+#    #+#             */
/*   Updated: 2024/11/21 13:14:32 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(int nbr, int *len)
{
	unsigned int	n;

	n = (unsigned int)nbr;
	if (n >= 10)
		ft_putunbr(n / 10, len);
	ft_putchar((n % 10 + '0'), len);
}
