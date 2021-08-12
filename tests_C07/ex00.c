#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_strdup.c"

int	main(void)
{
	char	*c = "abcedfg";
	char	*b = "\0";
	char	*d;
	char	*e;

	d = ft_strdup(c);
	e = ft_strdup(b);
	printf("expected : %s | result : %s\n", c, d);
	printf("expected : %s | result : %s\n", b, e);
	free(e);
	free(d);
}
