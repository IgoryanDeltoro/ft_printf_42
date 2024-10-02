#include "ft_printf.h"

int main()
{
	char str[] = "Hello World!";
	int	num = 1989;
	printf("%d\n", ft_printf("%p\n", str));
	printf("%d\n", printf("%p\n", str));
	printf("%d\n", ft_printf("%x\n", num));
       	printf("%d\n", printf("%x\n", num));
	printf("%d\n", ft_printf("%X\n", num));             
     	printf("%d\n", printf("%X\n", num));
	return (0);
}
