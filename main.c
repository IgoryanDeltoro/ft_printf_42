#include "ft_printf.h"

int	main(void)
{
	printf("/// result: %d \n",ft_printf("Hello, %s! Your score is  and grade is %c ", "Alisa", 'A'));
	printf("/// result: %d \n",printf("Hello, %s! Your score is  and grade is %c ", "Alisa", 'A'));
	return (0);
}