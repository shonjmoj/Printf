#include "ft_printf.h"

void ft_hex(unsigned long int nb, char flag)
{
    char* hex;
    char* HEX;

    
    hex = "0123456789abcdef";
    HEX = "0123456789ABCDEF";
    if (nb >= 16)
    {
        ft_hex(nb / 16, flag);
        ft_hex(nb % 16, flag);
    }
    else if (flag == 'X')
        ft_putchar(HEX[nb]);
    else if (flag == 'x')
        ft_putchar(hex[nb]);  
} 

void    write_ptr(unsigned long int nb)
{
    if (nb == 0)
        ft_putstr("(nil)");
    else
    {
        ft_putchar('0');
        ft_putchar('x');
        ft_hex(nb, 'x');
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
