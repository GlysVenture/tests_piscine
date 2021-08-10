#include <stdio.h>
#include "../ex01/ft_putstr.c"

int	main(void)
{
	char	b[1];
	char	*a = "12345678";

	b[0] = 0;
	printf("\nTest\nexpected : %s | result : \n", a);
	ft_putstr(a);
	printf("\nTest\nexpected : %s | result : \n", b);
	ft_putstr(b);
	printf("\n");
}
