/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:54:38 by salhali           #+#    #+#             */
/*   Updated: 2024/11/21 13:41:06 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);

void	ft_putstr(char *str, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putchar(char c, int *len);
void	ft_putunbr(int nbr, int *len);
void	ft_puthex(int nbr, char *format, int *len);
void	ft_putadd(void *p, int *len);

#endif // !FT_PRINTF_H
