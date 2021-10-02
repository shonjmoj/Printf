#include "ft_printf.h"
#include <stdint.h>

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while(s[i])
    {
        i++;
        //g_count++;
    }
    return (i);
}

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