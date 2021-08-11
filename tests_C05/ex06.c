/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:59:31 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/11 13:10:05 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "../ex06/ft_is_prime.c"

int main(void)
{
	printf("input 42 expected : 0 | result : %d\n", ft_is_prime(42));
	printf("input 2  expected : 1 | result : %d\n", ft_is_prime(2));
	printf("input 3  expected : 1 | result : %d\n", ft_is_prime(3));
	printf("input 79 expected : 1 | result : %d\n", ft_is_prime(79));
	printf("input 0  expected : 0 | result : %d\n", ft_is_prime(0));
	printf("input 1  expected : 0 | result : %d\n", ft_is_prime(1));
	printf("input -4 expected : 0 | result : %d\n", ft_is_prime(-4));
	printf("input -2147483648 expected : 0 | result : %d\n", ft_is_prime(-2147483648));
	return (0);
}
