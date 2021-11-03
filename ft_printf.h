/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:36:29 by elounejj          #+#    #+#             */
/*   Updated: 2021/11/03 14:36:29 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		g_count;

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_hex(unsigned long int nb, char flag);
void	ft_putstr(char *str);
void	write_ptr(unsigned long int nb);
void	ft_cspdiuxx(char format, va_list args);
int		ft_printf(const char *format, ...);
void	unsigned_number(unsigned int nb);

#endif