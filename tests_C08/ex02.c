#include <stdio.h>
#include <stdlib.h>
#include "../ex02/ft_abs.h"

int main(int argc, char **argv)
{
	while (argc > 1)
	{
		argc--;
		printf("abs :%d\n", ABS(atoi(argv[argc])));
	}
	return (0);
}
