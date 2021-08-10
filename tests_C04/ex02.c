#include <stdio.h>
#include "../ex02/ft_putnbr.c"

int	main(void)
{
	printf("\nTest\nexpected : 1230234 | result : \n");
	ft_putnbr(1230234);
	printf("\nTest\nexpected : 0 | result : \n");
	ft_putnbr(0);
	printf("\nTest\nexpected : -253 | result : \n");
	ft_putnbr(-253);
	printf("\nTest\nexpected : -2147483648 | result : \n");
	ft_putnbr(-2147483648);
	printf("\n");
}
