/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:55:19 by salhali           #+#    #+#             */
/*   Updated: 2024/11/19 18:50:35 by salhali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

// Function li ghadi t3ref type dial formatting
/*int	check_format(va_list args, char *format)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	if (format[i] == 'c') // %c Prints a single character
		length += ft_putchar(va_arg(args, char));
	else if (format[i] == 's') //%s Prints a string (as defined by the common C convention).
		length += ft_putstr(va_arg(args, char *));
	else if (format[i] == 'd' || format == 'i') //%i Prints an integer in base 10
		length += ft_putnbr(va_arg(args, int));
	else if (format[i] == 'p') // %p The void
		length += ft_putnbr(va_arg(args, void *));
	else if (format[i] == 'u') //
		length += ft_putnbr(va_arg(args, int));
	else if (format[i] == 'x')
		length += ft_putnbr(va_arg(argc, hex));
	return (length);
}*/

int	ft_printf(const char *str, ...) 
{
	va_list	args;
	int		i;
	int		count;
	
	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if(*str == 's')
			{
				char	*str = va_arg(args, char *); 
				while(*str)
				{
					write(1, str, 1);
					str++;
				}
			}
		}
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	ft_printf("%s", "");
}