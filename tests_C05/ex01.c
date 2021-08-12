/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:07:21 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/12 12:13:50 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex01/ft_recursive_factorial.c"

int main(void)
{
	printf("expected : 120 | result : %d\n", ft_recursive_factorial(5));
	printf("expected : 1 | result : %d\n", ft_recursive_factorial(1));
	printf("expected : 1 | result : %d\n", ft_recursive_factorial(0));
	printf("expected : 0 | result : %d\n", ft_recursive_factorial(-5));
}
