#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int     g_count;

size_t  ft_strlen (const char *s);
void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_base(unsigned long int nb, char flag);
void    ft_putstr(char* str);
int     number_length(int nb, char* base);
void    write_ptr(unsigned long int nb);
void    ft_write(char format, va_list args);
int     ft_printf(const char *format, ...);
void    unsigned_number(unsigned int nb);
int     bonus_field(int field);
int     ft_atoi(const char *str);

#endif