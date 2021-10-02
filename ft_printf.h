#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t  ft_strlen (const char *s);
int     ft_putchar(char c);
int     number(int nb);
int     ft_base(long int nb, char* base);
int     ft_putstr(char* str);
int     number_length(long int nb, char* base);
int     write_ptr(void* ptr);
void    ft_write(char format, void *value, int *length);
int     ft_printf(const char *format, ...);
int     unsigned_number(unsigned int nb);
char*   ft_itoa(long n);

#endif