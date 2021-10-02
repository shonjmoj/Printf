#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     g_count;

size_t  ft_strlen (const char *s);
void    ft_putchar(char c);
void    number(int nb);
void    ft_base(unsigned int nb, char flag);
void    ft_putstr(char* str);
int     number_length(int nb, char* base);
void    write_ptr(void* ptr);
void    ft_write(char format, void *value);
int     ft_printf(const char *format, ...);
void    unsigned_number(unsigned int nb);

#endif