#include <stdio.h>
#include <stdlib.h>
#include "../ex04/ft_strs_to_tab.c"

int	main(int argc, char **argv)
{
	int			i;
	t_stock_str	*tab;

	tab = ft_strs_to_tab(argc - 1, argv + 1);
	i = 0;
	while (tab[i].str != 0)
	{
		printf("tab element : %d\nsize %d\nstr %s\ncopy %s\n", i, tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
	return (0);
}
