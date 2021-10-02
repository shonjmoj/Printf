#include "ft_printf.h"
#include <stdarg.h>
#include <stdint.h>

void    ft_write(char format, void *value)
{
	if (format == 'i' || format == 'd')
		number((long)value);
    else if (format == 'u')
        unsigned_number((long)value);
    else if (format == 'p')
        write_ptr(value);
    else if (format == 's')
        ft_putstr((char*)value);
    else if (format == 'x')
        ft_base(*(unsigned int*)value, 'x');
    else if (format == 'X')
        ft_base(*(unsigned int*)value, 'X');
    else if (format == 'c')
	{
        write(1, &value, 1);
        g_count++;
    }
    else if (format == '%')
        ft_putchar('%');
}

int ft_printf(const char *format, ...)
{
    g_count = 0;
    va_list args;
    void*   str;

    va_start(args, format);
    while (*format) 
    {
        if (*format == '%')
        {
            format++;
            if (*format != '%')
                str = va_arg(args, void*);
            ft_write(*format, str);
        }
        else
            ft_putchar(*format);
        format++;
    }
    va_end(args);
    return (g_count);       
}