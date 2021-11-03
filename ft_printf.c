/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:35:17 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/03 14:35:17 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cspdiuxx(char format, va_list args)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		write_ptr(va_arg(args, unsigned long int));
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		unsigned_number(va_arg(args, unsigned int));
	else if (format == 'x')
		ft_hex(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		ft_hex(va_arg(args, unsigned int), 'X');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	g_count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format != '%')
				ft_cspdiuxx(*format, args);
			else if (*format == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (g_count);
}
