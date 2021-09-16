#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>

size_t ft_strlen (const char *s);
void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_putnbr_base(int nb, char* base);
void    ft_putstr(const char* str);


#endif