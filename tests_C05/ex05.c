/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:41:14 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/11 12:49:26 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "../ex05/ft_sqrt.c"

int main(void)
{
	printf("expected : 7 | result : %d\n", ft_sqrt(49));
	printf("expected : 0 | result : %d\n", ft_sqrt(42));
	printf("expected : 1 | result : %d\n", ft_sqrt(1));
	printf("expected : 0 | result : %d\n", ft_sqrt(0));
	printf("expected : 0 | result : %d\n", ft_sqrt(-1));
	printf("expected : 0 | result : %d\n", ft_sqrt(2147483647));
	printf("expected : 46340 | result : %d\n", ft_sqrt(2147395600));
	return (0);
}
