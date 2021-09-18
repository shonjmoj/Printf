#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>

size_t  ft_strlen (const char *s);
int     ft_putchar(char c);
int     number(int nb);
int     ft_base(int nb, char* base);
int     ft_putstr(const char* str);
int     number_length(long int nb, char* base);

#endif