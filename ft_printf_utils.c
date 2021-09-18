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