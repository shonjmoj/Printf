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

// int bonus_number(int nb)
// {
//     long int    n;
//     int         len;

//     n = nb;
//     len = 0;
//     if (n < 0)
//     {
//         len++;
//         n = -n;
//     }
//     if (n <= 9)
//     {
//         len++;
//         ft_putchar('+');
//         ft_putchar(n + 48);
//     }
//     else
//     {
//         number(n / 10);
//         number(n % 10);
//     }
//     return (len += ft_strlen(ft_itoa(n)));
// }