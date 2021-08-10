#include <stdio.h>
#include "../ex04/ft_putnbr_base.c"

int	main(void)
{
	char	poney[] = "poneyvif";
	char	deci[] = "0123456789";
	char	hexa[] = "0123456789abcdef";
	char	bin[] = "01";
	char	strange[] = "102310";
	char	strange2[] = "1234+56";
	char	strange3[] = "";

	printf("\nTest\nexpected : 128 | result : \n");
	ft_putnbr_base(128, deci);
	printf("\nTest\nexpected : -2b | result : \n");
	ft_putnbr_base(-43, hexa);
	printf("\nTest\nexpected : -80000000 | result : \n");
	ft_putnbr_base(-2147483648, hexa);
	printf("\nTest\nexpected : 1101 | result : \n");
	ft_putnbr_base(13, bin);
	printf("\nTest\nexpected : opoooyyf | result : \n");
	ft_putnbr_base(2134823, poney);
	printf("\nTest\nexpected :  | result : \n");
	ft_putnbr_base(2134823, strange);
	printf("\nTest\nexpected :  | result : \n");
	ft_putnbr_base(4325, strange2);
	printf("\nTest\nexpected :  | result : \n");
	ft_putnbr_base(21348, strange3);
	printf("\n");
}
