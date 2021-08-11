#include <stdio.h>
#include <math.h>
#include "../ex07/ft_find_next_prime.c"

int main(void)
{
	printf("input 42 expected : 43 | result : %d\n", ft_find_next_prime(42));
	printf("input 0 expected : 2 | result : %d\n", ft_find_next_prime(0));
	printf("input 9 expected : 11 | result : %d\n", ft_find_next_prime(9));
	printf("input 2147483647 expected : 2147483647 | result : %d\n", ft_find_next_prime(2147483647));
	return (0);
}
