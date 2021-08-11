/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:32:06 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/11 17:34:21 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_atoi_base.c"

int	main(void)
{
	char	a[] = "   \n   \r  \v +---+-+-42";
	char	b[] = " \n --+2b";
	char	c[] = "   0";
	char	d[] = "   \f   \t  -+2147483648";
	char	e[] = " \f\f  asd345";
	char	f[] = " \f\f  poneyvif";
	char	g[] = " \f\f  -0123456789";

	char	poney[] = "poneyvif";
	char	deci[] = "0123456789";
	char	hexa[] = "0123456789abcdef";
	char	bin[] = "01";
	char	strange[] = "1b231b";
//	char	strange2[] = "1234+56";
//	char	strange3[] = "";

	printf("Test\nexpected : -42 | result : %d\n", ft_atoi_base(a, deci));
	printf("Test\nexpected : 43 | result : %d\n", ft_atoi_base(b, hexa));
	printf("Test\nexpected : 0 | result : %d\n", ft_atoi_base(c, bin));
	printf("Test\nexpected : -2147483648 | result : %d\n", ft_atoi_base(d, deci));
	printf("Test\nexpected : 0 | result : %d\n", ft_atoi_base(e, deci));
	printf("Test\nexpected : 2 | result : %d\n", ft_atoi_base(b, deci));
	printf("Test\nexpected : 342391 | result : %d\n", ft_atoi_base(f, poney));
	printf("Test\nexpected : -123456789 | result : %d\n", ft_atoi_base(g, deci));
	printf("Test\nexpected : 0 | result : %d\n", ft_atoi_base(a, strange));
}
