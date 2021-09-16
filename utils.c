#include "ft_printf.h"
#include <unistd.h>

size_t ft_strlen (const char *s)
{
    unsigned int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}


void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(const char* str)
{
    while (*str)
    {
        write(1, str++, 1);
    }
}

void    ft_putnbr(int nb)
{
    long int    n;

    n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n <= 9)
        ft_putchar(n + 48);
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

void ft_hex(int nb, char flag)
{
    char *base = "0123456789abcdef";
    char *base_maj = "0123456789ABCDEF";
    int nbs[10];
    int i;

    i = 0;
    while (nb)
    {
        nbs[i] = nb % 16;
        i++;
        nb = nb / 16;
    }
    if (flag == 'x')
    {
        while (--i >= 0)
            ft_putchar(base[nbs[i]]);
    }
    else if (flag == 'X')
    {
        while (--i >= 0)
            ft_putchar(base_maj[nbs[i]]);
    }
} 

void    ft_putnbr_base(int nb, char* base)
{
    long int n;
    n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 16)
    {
        ft_putnbr_base(n / 16, base);
        ft_putnbr_base(n % 16, base);
    }
    else
        ft_putchar(base[n]);

}