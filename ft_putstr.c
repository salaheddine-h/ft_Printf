/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:33:41 by salhali           #+#    #+#             */
/*   Updated: 2024/11/18 18:44:48 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
	}
	else
	{
		while (*str)
		{
			ft_putchar(*str, len);
			str++;
		}
	}
}
