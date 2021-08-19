#include <stdio.h>
#include "../ex02/ft_split.c"

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	(void) argc;
	i = 0;
	tab = ft_split(argv[1], argv[2]);
	while (tab[i])
		printf("%s\n", tab[i++]);
	return (0);
}