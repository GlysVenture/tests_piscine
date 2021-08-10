#include <stdio.h>
#include "../ex03/ft_atoi.c"

int	main(void)
{
	char	a[] = "   \n   \r  \v +---+-+-42";
	char	b[] = " \n --+37523093";
	char	c[] = "   0";
	char	d[] = "   \f   \t  -+2147483648";
	char	e[] = " \f\f  asd345";

	printf("Test\nexpected : -42 | result : %d\n", ft_atoi(a));
	printf("Test\nexpected : 37523093 | result : %d\n", ft_atoi(b));
	printf("Test\nexpected : 0 | result : %d\n", ft_atoi(c));
	printf("Test\nexpected : -2147483648 | result : %d\n", ft_atoi(d));
	printf("Test\nexpected : 0 | result : %d\n", ft_atoi(e));
}
