#include "./includes/ft_printf.h"

int main(void) 
{
    int x = 42;
	
    printf("\n\n=========== Basic tests for %%c ============\n\n");
    printf(" (len: %d)\n", ft_printf("%c", 'A'));
    printf(" (len: %d)\n\n", printf("%c", 'A'));
	printf(" (len: %d)\n", ft_printf("%c", '\n'));
	printf(" (len: %d)\n\n", printf("%c", '\n'));
	printf(" (len: %d)\n", ft_printf("%c", 127));
	printf(" (len: %d)\n", printf("%c", 127));
  
    printf("\n\n=========== Basic tests for %%s ============\n\n");
	printf(" (len: %d)\n", ft_printf("%s", "Hello World!"));
	printf(" (len: %d)\n\n", printf("%s", "Hello World!"));
	printf(" (len: %d)\n", ft_printf("%s", ""));
	printf(" (len: %d)\n\n", printf("%s", ""));
    printf(" (len: %d)\n", ft_printf("%s", NULL));
	printf(" (len: %d)\n", printf("%s", NULL));
    
    printf("\n\n=========== Basic tests for %%p ============\n\n");
	printf(" (len: %d)\n", ft_printf("%p", &x));
	printf(" (len: %d)\n\n", printf("%p", &x));
	printf(" (len: %d)\n", ft_printf("%p", NULL));  
	printf(" (len: %d)\n", printf("%p", NULL));    

    printf("\n\n====== Basic tests for %%d and %%i =========\n\n");
    printf(" (len: %d)\n", ft_printf("%d", 42)); 
	printf(" (len: %d)\n\n", printf("%d", 42));
    printf(" (len: %d)\n", ft_printf("%d", -42));    
	printf(" (len: %d)\n\n", printf("%d", -42));
    printf(" (len: %d)\n", ft_printf("%d", 0)); 
	printf(" (len: %d)\n\n", printf("%d", 0));
    printf(" (len: %d)\n", ft_printf("%d", INT_MIN));    
	printf(" (len: %d)\n\n", printf("%d", INT_MIN));
    printf(" (len: %d)\n", ft_printf("%d", INT_MAX));   
	printf(" (len: %d)\n", printf("%d", INT_MAX));

    printf("\n\n====== Basic tests for %%u =========\n\n");
    printf(" (len: %d)\n", ft_printf("%u", 42));    
	printf(" (len: %d)\n\n", printf("%u", 42));
    printf(" (len: %d)\n", ft_printf("%u", UINT_MAX));
    printf(" (len: %d)\n", printf("%u", UINT_MAX));


    printf("\n\n====== Basic tests for %%x and %%X =========\n\n");
    printf(" (len: %d)\n", ft_printf("%x", 255));    
	printf(" (len: %d)\n\n", printf("%x", 255));
    printf(" (len: %d)\n", ft_printf("%X", 255));    
	printf(" (len: %d)\n\n", printf("%X", 255));
    printf(" (len: %d)\n", ft_printf("%x", 0));    
	printf(" (len: %d)\n", printf("%x", 0));

    printf("\n\n====== Basic tests for %% =========\n\n");
    printf(" (len: %d)\n", ft_printf("%%"));    
	printf(" (len: %d)\n\n", printf("%%"));
    printf(" (len: %d)\n", ft_printf("Discount: 50%% off!"));    
	printf(" (len: %d)\n", printf("Discount: 50%% off!"));

    printf("\n\n====== Edge case: no format specifier =========\n\n");
    printf(" (len: %d)\n", ft_printf("Hello World!"));    
	printf(" (len: %d)\n", printf("Hello World!"));

    printf("\n\n====== Edge case: unrecognized specifier =========\n\n");
    printf(" (len: %d)\n", ft_printf("%k", 123));    
	printf(" (len: %d)\n", printf("%k", 123));

    printf("\n\n====== Mixed format specifiers =========\n\n");
    printf(" (len: %d)\n", ft_printf("Char: %c, String: %s, Int: %d", 'A', "Test", 42));   
	printf(" (len: %d)\n", printf("Char: %c, String: %s, Int: %d", 'A', "Test", 42));

    printf("\n\n====== Mixed specifiers with regular text =========\n\n");
    printf(" (len: %d)\n", ft_printf("Value: %d is in hex: %x", 42, 42));    
	printf(" (len: %d)\n", printf("Value: %d is in hex: %x", 42, 42));

	printf("\n\n====== cspdiuxX%% =========\n\n");
    printf(" (output: %d)\n", ft_printf("cspdiuxX%"));    
	printf(" (output: %d)\n", printf("cspdiuxX%"));

	printf("\n\n====== %%w%% =========\n\n");
    printf(" (output: %d)\n", ft_printf("%w%"));    
	printf(" (output: %d)\n", printf("%w%"));

	printf("\n\n====== %%%%%%%%%% =========\n\n");
    printf(" (output: %d)\n", ft_printf("%%%%%"));    
	printf(" (output: %d)\n", printf("%%%%%"));


    return 0;
}
