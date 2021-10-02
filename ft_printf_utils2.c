#include "ft_printf.h"

void number(int nb)
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
        number(n / 10);
        number(n % 10);
    }
}