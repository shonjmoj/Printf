#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

static void ft_write(char format, const void *value)
{
    if (format == 'i' || format == 'd')
        ft_putnbr((long)value);
    else if (format == 's')
        ft_putstr((const char*)value);
    else if (format == 'x')
        ft_putnbr_base((long)value, "0123456789abcdef");
    else if (format == 'X')
        ft_putnbr_base((long)value, "0123456789ABCDEF");
    else if (format == 'c')
        ft_putchar(format);
    else if (format == '%')
        ft_putchar('%');
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    void* str;

    i = 0;
    va_start(args, *format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            str = va_arg(args, void*);
            ft_write(format[i], str);
        }
        ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return ft_strlen(format);       
}

int main()
{
    ft_printf("%X\n", 10);
}