#include <stdio.h>
#include <stdlib.h>
#include "../ex03/ft_strjoin.c"

int	main(void)
{
	char	*dest;
	char **strs;

	strs = malloc(sizeof(*strs) * 3);
	strs[0] = "premier";
	strs[1] = "";
	strs[2] = "3eme";
	dest = ft_strjoin(0, strs, ":un separateur:");
	printf("premier:un separateur::un separateur:3eme\n");
	printf("%s\n", dest);
	free(dest);
	strs = NULL;
	dest = ft_strjoin(3, strs, ":un separateur:");
	printf("premier:un separateur::un separateur:3eme\n");
	printf("%s\n", dest);
	free(dest);
	return (0);
}
