/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:53 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/03 14:31:53 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned long int nb, char flag)
{
	char	*hex;
	char	*hex_maj;

	hex = "0123456789abcdef";
	hex_maj = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_hex(nb / 16, flag);
		ft_hex(nb % 16, flag);
	}
	else if (flag == 'X')
		ft_putchar(hex_maj[nb]);
	else if (flag == 'x')
		ft_putchar(hex[nb]);
}

void	write_ptr(unsigned long int nb)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_hex(nb, 'x');
}

void	unsigned_number(unsigned int nb)
{
	if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		unsigned_number(nb / 10);
		unsigned_number(nb % 10);
	}
}
