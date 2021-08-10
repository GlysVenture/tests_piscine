#include <stdio.h>
#include <string.h>
#include "../ex00/ft_strcmp.c"
void static	ft_test(char *a, char *b);

int	main(void)
{
	char	a[] = "aacde";
	char	b[] = "aabcd";
	char	c[] = "a";
	char	d[1];
	char	e[1];

	d[0] = '\0';
	e[0] = '\0';

	ft_test(a, b);
	ft_test(b, a);
	ft_test(a, c);
	ft_test(b, d);
	ft_test(e, d);
}

void static ft_test(char *a, char *b)
{
	int	n;

	n = ft_strcmp(a, b);
	printf("string 1 : %s | string 2 : %s\nyour result : %d | strcmp result : %d\n", a, b, n, strcmp(a, b));
}
