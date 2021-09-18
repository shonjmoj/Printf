#include "ft_printf.h"

int    number_length(long int nb, char* base)
{
    int i;

    i = 0;
    while (nb > 0)
    {
        i++;
        nb /= ft_strlen(base);
    }
    return i;
}

int    ft_base(long int n, char* base)
{
    int i;

    i = 0;
    if (n < 0)
    {
        i++;
        ft_putchar('-');
        n = -n;
    }
    if (n < (long)ft_strlen(base))
        ft_putchar(base[n]);
    else
    {
        ft_base(n / ft_strlen(base), base);
        ft_base(n % ft_strlen(base), base);
    }
    return (i += number_length(n, base));
}

int    write_ptr(void* ptr)
{
    intptr_t i;

    i = (intptr_t)ptr;
    write(1, "0x", 2);
    return(ft_base(i,"0123456789abcdef") + 2);
}