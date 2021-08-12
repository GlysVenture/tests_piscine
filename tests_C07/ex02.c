#include <stdio.h>
#include <stdlib.h>
#include "../ex02/ft_ultimate_range.c"

int	main(void)
{
	int		**range;
	int		**range2;
	int		i;
	int		*r;
	int		*r2;

	i = 0;
	r = NULL;
	r2 = NULL;
	range = &r;
	range2 = &r2;
	printf("Test 1 : (-23 to 12)\noutput : %d\n", ft_ultimate_range(range, -23, 12));
	while (i < 35)
	{
		printf("%d:", (*range)[i]);
		i++;
	}
	i = 0;
	printf("\nTest 2 : (23 to 12)\noutput : %d\n", ft_ultimate_range(range2, 23, 12));
	if (*range2 == NULL)
	   printf("Test 2 succeded!\n");	
	free(*range);
	return (0);
}
