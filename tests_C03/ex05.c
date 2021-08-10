#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ex05/ft_strlcat.c"

void	ft_test(char *src, unsigned int n);

int	main(void)
{
	ft_test("abc", 8);
	ft_test("abcdefg", 8);
	ft_test("", 8);
	ft_test("abc", 0);
	ft_test("abc", 2);
	ft_test("abc", 4);
}

void	ft_test(char *src, unsigned int n)
{
	char	*dest;
	char	*dest2;
	int		i;

	dest = (char*)calloc(30, sizeof(char));
	dest2 = (char*)calloc(30, sizeof(char));
	i = 0;
	while(i < 29)
	{
		*(dest + i) = '0';
		*(dest2 + i) = '0';
		i++;
	}
	*(dest + 5) = 0;
	*(dest2 + 5) = 0;
	printf("Test\n src : %s | size %d\n", src, n);
	printf("ft_strlcat %u | strlcat %zu\n", ft_strlcat(dest, src, n), strlcat(dest2, src, n));
	printf("expected : %s | result %s\n", dest2, dest);
	free(dest);
	free(dest2);
}
