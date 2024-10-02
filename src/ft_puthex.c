#include "../ft_printf.h"

int	ft_puthex(uintptr_t num, char *format)
{
    int len = 0;

    if (num >= 16)
        len += ft_puthex((num / 16), format);
    len += ft_print_char(format[num % 16]);
    return (len);                                                                       }

