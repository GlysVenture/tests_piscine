#include <stdio.h>
#include <string.h>
#include "../ex04/ft_strstr.c"
void static	ft_test(char *a, char *b);

int	main(void)
{
	char	a[] = "Unpetitstring0";
	char	b[] = "petit0";
	char	c[] = "arbre0";
	char	d[1];

	d[0] = '\0';
	a[13] = '\0';
	b[5] = '\0';
	c[5] = '\0';
	ft_test(a, b);
	ft_test(a, c);
	ft_test(a, d);
}

void static ft_test(char *a, char *f)
{
	char	*n;

	n = ft_strstr(a, f);
	printf("------------\nstring 1 : %s | string tofind : %s\nyour result : %s | strstr result : %s\n", a, f, n, strstr(a, f));
}
