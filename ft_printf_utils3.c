#include "ft_printf.h"

int number_length(int nb, char* base)
{
    int i;

    i = 0;
    while (nb > 0)
    {
        i++;
        nb /= ft_strlen(base);
    }
    return(i);
}

void ft_base(unsigned long int nb, char flag)
{
    char hex[] = "0123456789abcdef";
    char HEX[] = "0123456789ABCDEF";
    if (nb >= 16)
    {
        ft_base(nb / 16, flag);
        ft_base(nb % 16, flag);
    }
    else if (flag == 'X')
        ft_putchar(HEX[nb]);
    else
        ft_putchar(hex[nb]);
    
} 

void    write_ptr(unsigned long int nb)
{
    if (nb == 0)
    {
        write(1, "(nil)", 5);
        g_count += 5;
    }
    else
    {
        write(1, "0x", 2);
        ft_base(nb, 'x');
        g_count += (number_length(nb, "0123456789abcdef") + 2);
    }
}

void    unsigned_number(unsigned int nb)
{
    if (nb <= 9)
        ft_putchar(nb + 48);
    else
    {
        unsigned_number(nb / 10);
        unsigned_number(nb % 10);
    }
}