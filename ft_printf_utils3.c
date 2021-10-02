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

void ft_base(unsigned int nb, char flag)
{
    char *base = "0123456789abcdef";
    char *base_maj = "0123456789ABCDEF";
    int nbs[12];
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

void    write_ptr(void* ptr)
{
    intptr_t    i;

    i = (intptr_t)ptr;
    if (i == 0)
    {
        write(1, "(nil)", 5);
        g_count += 5;
    }
    else
    {
        write(1, "0x", 2);
        ft_base(i, 'x');
        g_count += (number_length(i, "0123456789abcdef") + 2);
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