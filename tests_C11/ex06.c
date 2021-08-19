#include <stdio.h>
#include "../ex06/ft_sort_string_tab.c"

int main(int argc, char **argv)
{
	int 	i;

	i = 1;
	if (argc < 2)
		return (0);
	argv[argc - 1] = 0;
	ft_sort_string_tab(argv + 1);
	while (i < argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

