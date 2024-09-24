#include "ft_printf.h"

int	main(void)
{
	char	str[] = "Hello";
	// printf("/// result: %d \n", ft_printf("Hello,
	// 		%s! Your score is  and grade is %c ", "Alisa", 'A'));
	// printf("/// result: %d \n", printf("Hello, %s! Your score is  and grade is
	// 		%c ", "Alisa", 'A'));
	
	printf("   total count: %d \n", ft_printf("address: %p", str));
	printf("   total count: %d \n", printf("address: %p", str));
	return (0);
}