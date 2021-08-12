#include <stdio.h>
#include <stdlib.h>
#include "../ex01/ft_range.c"

int	main(void)
{
	int		*range;
	int		*range2;
	int		i;

	i = 0;
	range = ft_range(-23, 12);
	range2 = ft_range(23, 12);
	printf("Test 1 : (-23 to 12)\n");
	while (i < 35)
	{
		printf("%d:", range[i]);
		i++;
	}
	i = 0;
	printf("\n");
	if (range2 == 0)
	   printf("Test 2 succeded!\n");	
	free(range);
	return (0);
}
