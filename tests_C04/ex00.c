#include <stdio.h>
#include "../ex00/ft_strlen.c"

int	main(void)
{
	char	*a = "12345678";
	char	b[1];

	b[0] = 0;
	printf("Test\nexpected : 8 | result : %d\n", ft_strlen(a));
	printf("Test\nexpected : 0 | result : %d\n", ft_strlen(b));
}
