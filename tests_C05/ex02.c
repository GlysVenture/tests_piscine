/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondrac <tkondrac@student.42lausan>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:07:52 by tkondrac          #+#    #+#             */
/*   Updated: 2021/08/11 12:15:32 by tkondrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex02/ft_iterative_power.c"

int main(void)
{
	printf("expected : 125 | result : %d\n", ft_iterative_power(5, 3));
	printf("expected : -125 | result : %d\n", ft_iterative_power(-5, 3));
	printf("expected : 1 | result : %d\n", ft_iterative_power(0, 0));
	printf("expected : 1 | result : %d\n", ft_iterative_power(5, 0));
	printf("expected : 0 | result : %d\n", ft_iterative_power(5, -5));
	return (0);
}
