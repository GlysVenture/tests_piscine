/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:03:03 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/09 12:39:17 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ex01/ft_strncpy.c"
#include "rand_string.c"

int	ft_test(char *src, unsigned int l);

int	main(void)
{
	printf("dest is : 00000/o0000/o | where /o is end of string");
	ft_test("0123456789", 15);
	ft_test("test", 8);
	ft_test("0123456789" , 3);
	ft_test("un autre test" , 0);
	return (0);
}

int	ft_test(char *src, unsigned int l)
{
	char *dest;
	char *dest2;
	int		i;

	i = 0;
	dest = (char*)malloc(11 * sizeof(char));
	while(i < 10)
	{
		*(dest + i) = '0';
		i++;
	}
	*(dest + i) = '\0';
	*(dest + 5) = '\0';
	dest2 = ft_strncpy(dest, src, l);
	printf("-------------\nTest\nsrc string : %s | copy lenght : %u\ndest string : %s | output string : %s\n", src, l, dest, dest2);
	printf("leftover ? : %c\n", *(dest + 9));
// Strncpy tests
	i = 0;
	while(i < 10)
	{
		*(dest + i) = '0';
		i++;
	}
	*(dest + i) = '\0';
	*(dest + 5) = '\0';
	dest2 = strncpy(dest, src, l);
	printf("TEST string : %s | output TEST : %s\n", dest, dest2);
	printf("leftover : %c\n", *(dest + 9));
	free(dest);
	return (0);
}
