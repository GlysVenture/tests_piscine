/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:16:23 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/09 18:52:40 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ex10/ft_strlcpy.c"
#include "rand_string.c"
int	ft_test(unsigned int s, unsigned int d);

int	main(void)
{
	ft_test(15 , 8);
	ft_test(8 , 15);
	ft_test(10 , 2);
	ft_test(5 , 0);
	ft_test(0 , 4);
	return (0);
}

int	ft_test(unsigned int s, unsigned int d)
{
	char *dest;
	char *src;
	unsigned int n;
	size_t	t;

	dest = (char*)calloc(d, sizeof(char));
	if (s > 0)
		src = rand_string(s);
	else
		src = "\0";
	n = ft_strlcpy(dest, src, d);
	printf("-------------\nTest\nsrc string : %s | dest size : %u\ndest string : %s | output size : %d\n", src, d, dest, n);
	free(dest);
	dest = (char*)calloc(d, sizeof(char));
	t = strlcpy(dest, src, d);
	printf("TEST string : %s | output TEST : %zu\n", dest, t);
	free(dest);
	if (s > 0)
		free(src);
	return (0);
}
