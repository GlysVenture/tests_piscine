#include <stdlib.h>
#include <stdio.h>
#include "../ex04/ft_is_sort.c"

int	ft_intcmp(int a, int b);

int	main(int argc, char **argv)
{
	int		i;
	int 	*tab;

	tab = malloc(sizeof(int) * (argc - 1));
	i = 1;
	while (i < argc)
	{
		tab[i - 1] = atoi(argv[i]);
		printf("%d\n", tab[i - 1]);
		i++;
	}
	printf("is sort ? : %d", ft_is_sort(tab, argc - 1, &ft_intcmp));
}

int	ft_intcmp(int a, int b)
{
	return (a - b);
}
