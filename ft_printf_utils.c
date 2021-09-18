#include "ft_printf.h"
#include <stdint.h>

size_t ft_strlen (const char *s)
{
    unsigned int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}

int    ft_putstr(const char* str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}


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

int    ft_base(int nb, char* base)
{
    int i;
    long n;

    i = 0;
    n = nb;
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
    return (i + number_length(nb, base));
}