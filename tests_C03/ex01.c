#include <stdio.h>
#include <string.h>
#include "../ex01/ft_strncmp.c"
void static	ft_test(char *a, char *b, unsigned int m);

int	main(void)
{
	char	a[] = "aacde";
	char	b[] = "aabcd";
	char	c[] = "a";
	char	d[1];
	char	e[1];

	d[0] = '\0';
	e[0] = '\0';

	ft_test(a, b, 10);
	ft_test(b, a, 6);
	ft_test(b, a, 2);
	ft_test(a, c, 5);
	ft_test(b, d, 5);
	ft_test(e, d, 5);
}

void static ft_test(char *a, char *b, unsigned int m)
{
	int	n;
	size_t max;

	max = m;
	n = ft_strncmp(a, b, m);
	printf("Test\nstring 1 : %s | string 2 : %s | max length : %u\nyour result : %d | strcmp result : %d\n", a, b, m, n, strncmp(a, b, max));
}
