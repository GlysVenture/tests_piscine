#include <stdio.h>
#include <stdlib.h>
#include "../ex04/ft_strs_to_tab.c"
#include "../ex05/ft_show_tab.c"

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(tab);
	return (0);
}
