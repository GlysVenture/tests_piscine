/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:02:38 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/12 12:14:00 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_iterative_factorial.c"

int main(void)
{
	printf("expected : 120 | result : %d\n", ft_iterative_factorial(5));
	printf("expected : 1 | result : %d\n", ft_iterative_factorial(1));
	printf("expected : 1 | result : %d\n", ft_iterative_factorial(0));
	printf("expected : 0 | result : %d\n", ft_iterative_factorial(-5));
}
