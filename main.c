#include "ft_printf.h"

int	main(void)
{
	// char	str[] = "Hello";
	printf("   count: %d \n", ft_printf("hello my name is %s and i am %d old\n", "Laura", 23));
	printf("   count: %d \n", printf("hello my name is %s and i am %d old\n", "Laura", 23));

	
	// printf("   total count: %d \n", ft_printf("address: %p", str));
	// printf("   total count: %d \n", printf("address: %p", str));
	return (0);
}