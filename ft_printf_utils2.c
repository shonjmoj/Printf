#include "ft_printf.h"


static int     ft_len_nb(int nb)
{
    int i = 0;
    if (nb == 0)
        i++;
    else if (nb < 0)
    {
        i++;
        nb = -nb;
    }
    while(nb)
    {
        nb /= 10;
        i++;
    }
    return i;
}

char*   ft_itoa(int n)
{
    int len = ft_len_nb(n);
    char* str;
    long nb;
    
    nb = n;
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return NULL;
    str[len--] = '\0';
    if (nb == 0)
        str[0] = '0';
    else if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while(nb)
    {
        str[len--] = (nb % 10) + '0';
        nb = nb / 10;
    }
    return str;
}

int    number(int nb)
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
    return (ft_strlen(ft_itoa(n)));
}