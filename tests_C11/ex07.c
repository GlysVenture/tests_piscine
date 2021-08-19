#include <stdio.h>
#include "../ex07/ft_advanced_sort_string_tab.c"

int	ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
	int 	i;

	i = 1;
	if (argc < 2)
		return (0);
	argv[argc - 1] = 0;
	ft_advanced_sort_string_tab(argv + 1, &ft_strcmp);
	while (i < argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
