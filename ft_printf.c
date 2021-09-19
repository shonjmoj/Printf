#include "ft_printf.h"
#include <stdarg.h>
#include <stdint.h>

void    ft_write(char format, const void *value, int *length)
{
	if (format == 'i' || format == 'd')
    	*length += number((long)value);
    else if (format == 'u')
        *length += unsigned_number((long)value);
    else if (format == 'p')
        *length += write_ptr((void*)value);
    else if (format == 's')
        *length += ft_putstr((const char*)value);
    else if (format == 'x')
        *length += ft_base((long)value, "0123456789abcdef");
    else if (format == 'X')
        *length += ft_base((long)value, "0123456789ABCDEF");
    else if (format == 'c')
    {
        write(1, &value, 1);
        *length += 1;
    }
    else if (format == '%')
        *length += ft_putchar('%');
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     len;
    void*   str;

    va_start(args, format);
    len = 0; 
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format != '%')
                str = va_arg(args, void*);
            ft_write(*format, str, &len);
        }
        else
        {
            len++;
            ft_putchar(*format);
        }
        format++;
    }
    va_end(args);
    return (len);       
}