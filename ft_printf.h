#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int     g_count;

void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_hex(unsigned long int nb, char flag);
void    ft_putstr(char* str);
void    write_ptr(unsigned long int nb);
void    ft_cspdiuxX(char format, va_list args);
int     ft_printf(const char *format, ...);
void    unsigned_number(unsigned int nb);

#endif