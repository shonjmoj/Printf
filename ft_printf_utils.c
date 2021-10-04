#include "ft_printf.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
    g_count++;
}

void ft_putstr(char* str)
{
    int i;

    i = 0;
    if (!str)
    {
        write(1, "(null)", 6);
        g_count += 6;
    }
    else
    {
        while (str[i])
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}

void ft_putnbr(int nb)
{
    long long int    n;

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
