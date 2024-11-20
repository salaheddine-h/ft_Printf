/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:54:38 by salhali           #+#    #+#             */
/*   Updated: 2024/11/19 18:36:54 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...); ////Done


void  ft_putstr(char *str, int *len); //Done
void  ft_putnbr(int nbr, int *len); //Done
void  ft_putchar(char c , int *len); //Done
void	ft_putunbr(int nbr, int *len);
void	ft_puthex(int nbr, char *format, int *len);
void	ft_putadd(void *p, int *len);

#endif // !FT_PRINTF_H
